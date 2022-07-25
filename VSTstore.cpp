// VSTstore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Plugin.h"

void MainMenu()
{
    //std::cout << "1. Instruments" << std::endl;
    //std::cout << "2. Signal Processing" << std::endl;
    //std::cout << "3. Spectrum Analysers" << std::endl;

    std::cout << "[1] View Cart" << std::endl;
    std::cout << "[2] Shop" << std::endl;
    std::cout << "[3] Exit" << std::endl;
    std::cout << "Enter Choice: ";
}

void DisplayPlugins(std::vector<Plugin> pluginProducts)
{
    for (auto product : pluginProducts)
    {
        std::cout << product.ShowName() << std::endl;
    }
}

int main()
{
    std::vector<Plugin> plugins;
    Plugin plugin1("Wavetable Synth", (float)99.99, "instrument");
    Plugin plugin2("Equalizer", (float)35.99, "signal processor");
    Plugin plugin3("Spectrum Visualizer", (float)19.99, "spectrum");

    plugins.push_back(plugin1);
    plugins.push_back(plugin2);
    plugins.push_back(plugin3);

    std::cout << "Welcome to the VST Shop!" << std::endl;
    int choiceInput;
    do
    {
        MainMenu();
        std::cin >> choiceInput;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore();
        }
        else
        {
            switch (choiceInput)
            {
            case 1:
                std::cout << "Show Cart" << std::endl;
                break;
            case 2:
                DisplayPlugins(plugins);
                break;
            case 3:
                break;
            default:
                std::cout << "error input" << std::endl; 
                break;
            }
        }
    } while (choiceInput != 3);

    std::cout << "Thank you!";

}

// VSTstore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Plugin.h"

void MainMenu()
{
    std::cout << "[1] View Cart" << std::endl;
    std::cout << "[2] Shop" << std::endl;
    std::cout << "[3] Exit" << std::endl;
    std::cout << "Enter Choice: ";
}

void ShowPluginTypesMenu()
{
    std::cout << "[1] All Plugins" << std::endl;
    std::cout << "[2] Instruments" << std::endl;
    std::cout << "[3] Signal Processing" << std::endl;
    std::cout << "[4] Spectrum Analysers" << std::endl;
    std::cout << "Enter Choice: " << std::endl;
}

void PluginMenu(std::vector<Plugin> plugins)
{
    int index = 1;
    for (auto product : plugins)
    {
        std::cout << "[" << index << "] " << product.ShowName() << std::endl;
        index++;
    }
}

std::vector<Plugin> FilterPlugins(std::vector<Plugin> allPlugins, std::string pluginType)
{
    if (pluginType == "all")
    {
        return allPlugins;
    }
    else
    {
        std::vector<Plugin> filteredPlugins;
        for (auto product : allPlugins)
        {
            if (product.ShowPluginType() == pluginType)
            {
                filteredPlugins.push_back(product);
            }
        }
        return filteredPlugins;
    }
}

void DisplayPlugins(std::vector<Plugin> pluginProducts)
{
    ShowPluginTypesMenu();

    int pluginTypeChoiceInput;
    std::cin >> pluginTypeChoiceInput;
    std::string setPluginType;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
    }
    else
    {
        switch (pluginTypeChoiceInput)
        {
        case 1:
            setPluginType = "all";
            break;
        case 2:
            setPluginType = "instrument";
            break;
        case 3:
            setPluginType = "signal processor";
            break;
        case 4:
            setPluginType = "spectrum";
            break;
        default:
            setPluginType = "all";
            break;
        }
    }
    int index = 1;

    std::vector<Plugin> showPlugins = FilterPlugins(pluginProducts, setPluginType);
    PluginMenu(showPlugins);

    std::cout << std::endl;

    int productChoice;
    std::cout << "Which item would you like to add to your cart [Enter Number]: ";
    std::cin >> productChoice;




}

void AddToCart(std::vector<Plugin> cart, Plugin plugin)
{

}

int main()
{
    std::vector<Plugin> myCart;
    std::vector<Plugin> plugins;
    Plugin plugin1("Wavetable Synth", (float)99.99, "instrument");
    Plugin plugin2("Equalizer", (float)35.99, "signal processor");
    Plugin plugin3("Spectrum Visualizer", (float)19.99, "spectrum");
    Plugin plugin4("Piano VST", (float)150.99, "instrument");

    plugins.push_back(plugin1);
    plugins.push_back(plugin2);
    plugins.push_back(plugin3);
    plugins.push_back(plugin4);

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
                if (myCart.size() <= 0)
                {
                    std::cout << "Cart is empty." << std::endl;
                } 
                else
                {
                    float currentTotal = 0;
                    for (auto product : myCart)
                    {
                        std::cout << "- " << product.ShowName() << std::endl;
                        std::cout << "$" << product.ShowPrice() << std::endl;
                        std::cout << std::endl;
                        currentTotal += product.ShowPrice();
                    }
                    std::cout << "Total: $" << currentTotal;
                }
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

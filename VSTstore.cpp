// VSTstore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Plugin.h"

void MainSelections()
{
    std::cout << "1. Instruments" << std::endl;
    std::cout << "2. Signal Processing" << std::endl;
    std::cout << "3. Spectrum Analysers" << std::endl;
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
    Plugin plugin1("Wavetable Synth", (float)99.99);
    Plugin plugin2("Equalizer", (float)35.99);
    Plugin plugin3("Spectrum Visualizer", (float)19.99);

    plugins.push_back(plugin1);
    plugins.push_back(plugin2);
    plugins.push_back(plugin3);

    std::cout << "Welcome to the VST Shop!\n";
    MainSelections();
    DisplayPlugins(plugins);
}

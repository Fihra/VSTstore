#include "Plugin.h"

#include <iostream>
#include <vector>

extern const std::vector<Plugin> Data()
{
    Plugin plugin1("Wavetable Synth", (float)99.99, "instrument");
    Plugin plugin2("Equalizer", (float)35.99, "signal processor");
    Plugin plugin3("Spectrum Visualizer", (float)19.99, "spectrum");
    Plugin plugin4("Piano VST", (float)150.99, "instrument");

    std::vector<Plugin> plugins = {
        plugin1,
        plugin2,
        plugin3,
        plugin4
    };
    return plugins;
}
#pragma once
#include <iostream>
#include <string.h>

class Plugin
{
public:
	Plugin(std::string pluginName, float newPrice, std::string newPluginType);
	std::string ShowName();
	float ShowPrice();
	std::string ShowPluginType();
private:
	std::string name;
	float price;
	std::string pluginType;
};


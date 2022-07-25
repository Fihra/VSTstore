#include "Plugin.h"

Plugin::Plugin(std::string newName, float newPrice, std::string newPluginType)
{
	name = newName;
	price = newPrice;
	pluginType = newPluginType;
}

std::string Plugin::ShowName()
{
	return name;
}

float Plugin::ShowPrice()
{
	return price;
}

std::string Plugin::ShowPluginType()
{
	return pluginType;
}
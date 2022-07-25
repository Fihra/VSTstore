#include "Plugin.h"

Plugin::Plugin(std::string newName, float newPrice)
{
	name = newName;
	price = newPrice;
}

std::string Plugin::ShowName()
{
	return name;
}

float Plugin::ShowPrice()
{
	return price;
}
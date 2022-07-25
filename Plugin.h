#pragma once
#include <iostream>
#include <string.h>

class Plugin
{
public:
	Plugin(std::string pluginName, float newPrice);
	std::string ShowName();
	float ShowPrice();
private:
	std::string name;
	float price;
};


#pragma once
#include <string>

struct Screen
{
	int width = 1920;
	int height = 1080;
	std::string title = "Crabnap";
};

inline Screen gameScreen;
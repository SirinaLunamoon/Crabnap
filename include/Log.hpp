#pragma once
#include <iostream>
#include <string>

namespace Log
{
	void showErrors(std::string message)
	{
		system("cls");
		std::cout << "[ERROR] " << message << std::endl;
	}

	void showWarnings(std::string message)
	{
		system("cls");
		std::cout << "[WARNING] " << message << std::endl;
	}
	
	void showInfo(std::string message)
	{
		system("cls");
		std::cout << "[INFO] " << message << std::endl; 
	}
}
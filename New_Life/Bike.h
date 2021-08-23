#pragma once
#include <string.h>
#include <iostream>
class Bike
{
public:
	int countWheel;
	std::string color;
	int weight;
	Bike();
	Bike(int countWheels, std::string color, int weight);
	void printInfo();

private:
	int countSpiz;

};
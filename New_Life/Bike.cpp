#include "Bike.h"

Bike::Bike()
{
    color = "Red";
    countWheel = 2;
    weight = 20;
}

Bike::Bike(int countWheels, std::string color, int weight)
{
    this->color = color;
    this->countWheel = countWheels;
    this->weight = weight;
    this->countSpiz = weight / countWheels * 10;
}

void Bike :: printInfo()
{
    std::cout << color << " " << countWheel << " " << weight << " " << countSpiz << std::endl;
}
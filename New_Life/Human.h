#pragma once
#include <iostream>
#include <string.h>

class Human
{
public:
	std::string name;
	std::string gender;
	int age;
	int weight;
	int height;
	Human();
	Human(std::string name, std::string gender, int age, int weight, int height);
	void printInf();
	void go();

private:
	int size_foot;
	void itStepInfo(int itStep);
};
#include "Human.h"

using namespace std;

Human::Human()
{
	name = "Nikita";
	gender = "M";
	age = 20;
	weight = 65;
	height = 175;
	size_foot = 45;
}

Human::Human(std::string name, std::string gender, int age, int weight, int height)
{
	this->name = name;
	this->gender = gender;
	this->age = age;
	this->weight = weight;
	this->height = height;
	this->size_foot = height / 4;
}

void Human::printInf()
{
	std::cout << name << " " << gender  << " " << age << " " << weight << " " << height << " " << size_foot << std::endl;
}

void Human::go()
{
	int metr;
	int itStep;
	cout << "Введите сколько человеку нужно пройти метров: " << endl;
	cin >> metr;
	itStep = metr / 0.7;
	itStepInfo(itStep);
}

void Human::itStepInfo(int itStep)
{
	cout << "Кол-во шагов: " << itStep << endl;
}
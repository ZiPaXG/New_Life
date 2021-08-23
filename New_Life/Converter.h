#pragma once
#include <iostream>
#include <string.h>
#include "Meat.h"

using namespace std;

class Converter
{
public:
	int countShashlik;
	int countPeople;
	int typeHunger;
	void division(int weight);
	Converter();
};


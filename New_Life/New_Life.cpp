#include <iostream>
#include <windows.h>
#include "Human.h"
#include "Meat.h"
#include "Converter.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    Human firstHuman = Human();
    Human secondHuman = Human("Ivan", "M", 16, 60, 167);
    firstHuman.printInf();
    secondHuman.printInf();
    secondHuman.go();

    Meat toasty = Meat("Pig", 3);
    
}
#include "Stove.h"

#include <string>
#include <iostream>
using namespace std;

void Stove::Print()
{
	Kitchenware::print();
	cout << "Цвет: " << this->color << endl;
}

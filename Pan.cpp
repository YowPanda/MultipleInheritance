#include "Pan.h"

#include <string>
#include <iostream>
using namespace std;

Pan::Pan()
{
	this->id = 0;
	this->volume = 0.0;
}

Pan::Pan(int id, double volume)
{
	this->id = id;
	this->volume = volume;
}

void Pan::Print()
{
	Kitchenware::print();
	cout << "־בתול: " << this->volume << endl;
}

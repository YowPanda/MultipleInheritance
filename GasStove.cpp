#include "GasStove.h"

#include <string>
#include <iostream>
using namespace std;

GasStove::GasStove()
{
	this->id = 0;
	this->color = "";
	this->gasConsumption = 0.0;
}

GasStove::GasStove(int id, string color, double gasConsumption)
{
	this->id = id;
	this->color = color;
	this->gasConsumption = gasConsumption;
}

void GasStove::Print()
{
	Stove::Print();
	cout << "Расход газа: " << this->gasConsumption << endl;
}


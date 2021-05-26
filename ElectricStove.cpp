#include "ElectricStove.h"

#include <string>
#include <iostream>
using namespace std;

ElectricStove::ElectricStove()
{
	this->id = 0;
	this->color = "";
	this->power = 0.0;
}

ElectricStove::ElectricStove(int id, string color, double power)
{
	this->id = id;
	this->color = color;
	this->power = power;
}

void ElectricStove::Print()
{
	Stove::Print();
	cout << "Мощность: " << this->power << endl;
}


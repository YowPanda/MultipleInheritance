#include "Multicooker.h"

#include <string>
#include <iostream>
using namespace std;

Multicooker::Multicooker()
{
	this->id = 0;
	this->volume = 0.0;
	this->color = "";
	this->power = 0.0;
	this->IfPressureCooker = false;
}

Multicooker::Multicooker(int id, double volume, string color, double power, bool IfPressureCooker)
{
	this->id = id;
	this->volume = volume;
	this->color = color;
	this->power = power;
	this->IfPressureCooker = IfPressureCooker;
}

void Multicooker::Print()
{
	ElectricStove::Print();
	cout << "Объем: " << this->volume << endl;
	if (this->IfPressureCooker)
		cout << "Имеет ли функцию скороварки: Да" <<  endl;
	else 
		cout << "Имеет ли функцию скороварки: Нет" << endl;
}


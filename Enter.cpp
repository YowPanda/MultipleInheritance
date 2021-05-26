#include "Enter.h"

#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

// Ввод информации о кастрюле
Pan* enterPan()
{
	int id;
	double volume;

	cout << "Введите инвентарный номер кухонной утвари: ";
	cin >> id;

	cout << "Введите объем кастрюли: ";
	cin >> volume;

	Pan* pan = new Pan(id, volume);
	return pan;
}

// Ввод информации об электрической плите
ElectricStove* enterElectricStove()
{
	int id;
	string color;
	double power;

	cout << "Введите инвентарный номер кухонной утвари: ";
	cin >> id;

	cout << "Введите цвет плиты: ";
	cin >> color;

	cout << "Введите мощность электрической плиты: ";
	cin >> power;

	ElectricStove* electricStove = new ElectricStove(id, color, power);
	return electricStove;
}

// Ввод информации о газовой плите
GasStove* enterGasStove()
{
	int id;
	string color;
	double gasConsumption;

	cout << "Введите инвентарный номер кухонной утвари: ";
	cin >> id;

	cout << "Введите цвет плиты: ";
	cin >> color;

	cout << "Введите расход газа плитой: ";
	cin >> gasConsumption;

	GasStove* gasStove = new GasStove(id, color, gasConsumption);
	return gasStove;
}

// Ввод информации о мультиварке
Multicooker* enterMulticooker()
{
	int id;
	double volume;
	string color;
	double power;
	string flag;
	bool IfPressureCooker;
	
	cout << "Введите инвентарный номер кухонной утвари: ";
	cin >> id;

	cout << "Введите объем мультиварки: ";
	cin >> volume;

	cout << "Введите цвет мультиварки: ";
	cin >> color;

	cout << "Введите мощность мультиварки : ";
	cin >> power;

	cout << "Имеет ли функцию скороварки (Да/Нет): ";
	cin >> flag;

	if (flag == "Да")
		IfPressureCooker = true;
	else
		IfPressureCooker = true;

	Multicooker* multicooker = new Multicooker(id, volume, color, power, IfPressureCooker);
	return multicooker;
}
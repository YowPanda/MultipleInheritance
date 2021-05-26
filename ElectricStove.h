// Электрическая плита <- Плита
#pragma once

#include "Kitchenware.h"
#include "Stove.h"
#include <iostream>
using namespace std;

// Добавляем виртуальную функцию, чтобы класс стал абстрактным
class ElectricStove : virtual public Stove
{
public:
	double power;
	
	// Конструктор без параметров
	ElectricStove();

	// Конструктор с параметрами
	ElectricStove(int id, string color, double power);

	void Print() override;
};

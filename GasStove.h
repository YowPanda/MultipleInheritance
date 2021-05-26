// Газовая плита <- Плита
#pragma once

#include "Stove.h"
#include <iostream>
using namespace std;

// Добавляем виртуальную функцию, чтобы класс стал абстрактным
class GasStove : virtual public Stove
{
public:
	double gasConsumption;

	// Конструктор без параметров
	GasStove();

	// Конструктор с параметрами
	GasStove(int id, string color, double gasConsumption);

	void Print() override;
};


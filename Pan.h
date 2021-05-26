// Кастрюля <- Кухонная утварь
#pragma once

#include "Kitchenware.h"
#include <iostream>
using namespace std;

class Pan : virtual public Kitchenware
{
public:
	double volume;
	
	// Конструктор без параметров
	Pan();
	
	// Конструктор с параметрами
	Pan(int id, double volume);

	void Print() override;
};

// Плита <- Кухонная утварь
#pragma once

#include "Kitchenware.h"
#include <iostream>
using namespace std;

class Stove : virtual public Kitchenware
{
public:
	string color;

	void Print() override;
};

// Кухонная утварь
#pragma once

#include <iostream>
using namespace std;

// Добавляем виртуальную функцию, чтобы класс стал абстрактным
class Kitchenware
{
public:
	int id;

	virtual void Print() = 0;

	void print();
};

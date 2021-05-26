// ����������� <- ������������� ����� / ��������
#pragma once

#include "ElectricStove.h"
#include "Pan.h"
#include <iostream>
using namespace std;

class Multicooker : virtual public ElectricStove, virtual public Pan
{
public:
	bool IfPressureCooker;

	// ����������� ��� ����������
	Multicooker();

	// ����������� � �����������
	Multicooker(int id, double volume, string color, double power, bool IfPressureCooker);

	void Print() override;
};


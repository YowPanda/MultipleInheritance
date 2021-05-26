// ������������� ����� <- �����
#pragma once

#include "Kitchenware.h"
#include "Stove.h"
#include <iostream>
using namespace std;

// ��������� ����������� �������, ����� ����� ���� �����������
class ElectricStove : virtual public Stove
{
public:
	double power;
	
	// ����������� ��� ����������
	ElectricStove();

	// ����������� � �����������
	ElectricStove(int id, string color, double power);

	void Print() override;
};

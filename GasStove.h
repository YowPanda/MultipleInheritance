// ������� ����� <- �����
#pragma once

#include "Stove.h"
#include <iostream>
using namespace std;

// ��������� ����������� �������, ����� ����� ���� �����������
class GasStove : virtual public Stove
{
public:
	double gasConsumption;

	// ����������� ��� ����������
	GasStove();

	// ����������� � �����������
	GasStove(int id, string color, double gasConsumption);

	void Print() override;
};


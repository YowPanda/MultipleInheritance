// �������� <- �������� ������
#pragma once

#include "Kitchenware.h"
#include <iostream>
using namespace std;

class Pan : virtual public Kitchenware
{
public:
	double volume;
	
	// ����������� ��� ����������
	Pan();
	
	// ����������� � �����������
	Pan(int id, double volume);

	void Print() override;
};

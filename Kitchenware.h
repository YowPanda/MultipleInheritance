// �������� ������
#pragma once

#include <iostream>
using namespace std;

// ��������� ����������� �������, ����� ����� ���� �����������
class Kitchenware
{
public:
	int id;

	virtual void Print() = 0;

	void print();
};

#include "Enter.h"

#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

// ���� ���������� � ��������
Pan* enterPan()
{
	int id;
	double volume;

	cout << "������� ����������� ����� �������� ������: ";
	cin >> id;

	cout << "������� ����� ��������: ";
	cin >> volume;

	Pan* pan = new Pan(id, volume);
	return pan;
}

// ���� ���������� �� ������������� �����
ElectricStove* enterElectricStove()
{
	int id;
	string color;
	double power;

	cout << "������� ����������� ����� �������� ������: ";
	cin >> id;

	cout << "������� ���� �����: ";
	cin >> color;

	cout << "������� �������� ������������� �����: ";
	cin >> power;

	ElectricStove* electricStove = new ElectricStove(id, color, power);
	return electricStove;
}

// ���� ���������� � ������� �����
GasStove* enterGasStove()
{
	int id;
	string color;
	double gasConsumption;

	cout << "������� ����������� ����� �������� ������: ";
	cin >> id;

	cout << "������� ���� �����: ";
	cin >> color;

	cout << "������� ������ ���� ������: ";
	cin >> gasConsumption;

	GasStove* gasStove = new GasStove(id, color, gasConsumption);
	return gasStove;
}

// ���� ���������� � �����������
Multicooker* enterMulticooker()
{
	int id;
	double volume;
	string color;
	double power;
	string flag;
	bool IfPressureCooker;
	
	cout << "������� ����������� ����� �������� ������: ";
	cin >> id;

	cout << "������� ����� �����������: ";
	cin >> volume;

	cout << "������� ���� �����������: ";
	cin >> color;

	cout << "������� �������� ����������� : ";
	cin >> power;

	cout << "����� �� ������� ���������� (��/���): ";
	cin >> flag;

	if (flag == "��")
		IfPressureCooker = true;
	else
		IfPressureCooker = true;

	Multicooker* multicooker = new Multicooker(id, volume, color, power, IfPressureCooker);
	return multicooker;
}
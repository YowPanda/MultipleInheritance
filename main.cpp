#include "Kitchenware.h"
#include "Stove.h"
#include "Pan.h"
#include "ElectricStove.h"
#include "GasStove.h"
#include "Multicooker.h"
#include "AVL-Tree.h"
#include "Enter.h"

#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Tree Root = NULL;
	bool IfTurn = 0;

	Kitchenware* kitchenware = NULL;

	// ��������
	int act;
	// ��� ��������
	int product;
	// ��� ������ ������
	int tree;
	// ���������� ��� ��������, ���������� id
	int id;

	do
	{
		// ����� ��������
		cout << "�������� ��������:" << endl;
		cout << "1: �������� �������� ������" << endl;
		cout << "2: ����� � ������� ������ �� id" << endl;
		cout << "3: ������� ������ �������� ������" << endl;
		cout << "4: ������� ������ �� id" << endl;
		cout << "5: ���������� ������ � ����������" << endl;
		cin >> act;
		// ��������� �������������� ��������
		switch (act)
		{
		// ���������� �������� ������
		case 1:
			cout << "�������� ��� ����������� �������� ������: " << endl;
			cout << "1: ��������" << endl;
			cout << "2: ������������� �����" << endl;
			cout << "3: ������� �����" << endl;
			cout << "4: �����������" << endl;
			cin >> product;
			// ��������� ���������� ��������������� ���� �������� ������
			switch (product)
			{
			// ���������� ��������
			case 1:
				kitchenware = enterPan();
				cout << endl;
				break;
			// ���������� ������������� �����
			case 2:
				kitchenware = enterElectricStove();
				cout << endl;
				break;
			// ���������� ������� �����
			case 3:
				kitchenware = enterGasStove();
				cout << endl;
				break;
			// ���������� �����������
			case 4:
				kitchenware = enterMulticooker();
				cout << endl;
				break;
			default:
				break;							
			}
			// ��������� �������������� �������� ������ � ������
			InsertInTree(kitchenware, Root, IfTurn); break;

		// ����� � ��������� �� ������� �������� �� id ��������
		case 2:
			cout << "������� id ������� �������� ������: ";
			cin >> id;
			kitchenware = FindInTree(id, Root);
			if (kitchenware == NULL)
			{
				cout << "�� ��������� id �������� ������ �� �������";
				cout << endl;
			}
			else
			{
				cout << "�������� � ������ � ��������� id: ";
				cout << endl;
				kitchenware->Print();
				cout << endl;
			}
			break;

		// ���������� ������ �������� ������
		case 3:
			cout << "�������� ��� ���������� �������� ������: " << endl;
			cout << "1: ������ �����" << endl;
			cout << "2: �������� �����" << endl;
			cout << "3: ������������ �����" << endl;
			cin >> tree;
			// �������� ���������� ������
			switch (tree)
			{
			// ���������� ������ �������
			case 1:
				StraightGoRound(Root); break;

			// ���������� �������� �������
			case 2:
				ReverseGoRound(Root); break;

			// ���������� �������� �������
			case 3:
				SymmetricGoRound(Root); break;
			}
			default:
				break;

		// �������� �� ������ �� id
		case 4:
			cout << "������� id ��������� �������� ������: ";
			cin >> id;
			Remove(Root, id);
			cout << "�������� ������ �������";
			cout << endl;
			break;

		// ����������� ������ � ����������
		case 5:
			if (Root != NULL)
				DeleteTree(Root);
			return 0;

		}
	} while (act == 1 || act == 2 || act == 3 || act == 4 || act == 5);

	system("pause");
	return 0;
}
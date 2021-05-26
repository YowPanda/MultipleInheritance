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

	// Действие
	int act;
	// Тип продукта
	int product;
	// Тип обхода дерева
	int tree;
	// Переменная для искомого, удаляемого id
	int id;

	do
	{
		// Выбор действия
		cout << "Выберите действие:" << endl;
		cout << "1: Добавить кухонную утварь" << endl;
		cout << "2: Найти и вывести утварь по id" << endl;
		cout << "3: Вывести список кухонной утвари" << endl;
		cout << "4: Удалить утварь по id" << endl;
		cout << "5: Прекратить работу с программой" << endl;
		cin >> act;
		// Обработка соответсвующих действий
		switch (act)
		{
		// Добавление кухонной утвари
		case 1:
			cout << "Выберите тип добавляемой кухонной утвари: " << endl;
			cout << "1: Кастрюля" << endl;
			cout << "2: Электрическая плита" << endl;
			cout << "3: Газовая плита" << endl;
			cout << "4: Мультиварка" << endl;
			cin >> product;
			// Обработка добавления соответсвуещего типа кухонной утвари
			switch (product)
			{
			// Добавление кастрюли
			case 1:
				kitchenware = enterPan();
				cout << endl;
				break;
			// Добавление электрической плиты
			case 2:
				kitchenware = enterElectricStove();
				cout << endl;
				break;
			// Добавление газовой плиты
			case 3:
				kitchenware = enterGasStove();
				cout << endl;
				break;
			// Добавление мультиварки
			case 4:
				kitchenware = enterMulticooker();
				cout << endl;
				break;
			default:
				break;							
			}
			// Добавляем соответсвующую кухонную утварь в дерево
			InsertInTree(kitchenware, Root, IfTurn); break;

		// Поиск и выведение на консоль искомого по id продукта
		case 2:
			cout << "Введите id искомой куханной утвари: ";
			cin >> id;
			kitchenware = FindInTree(id, Root);
			if (kitchenware == NULL)
			{
				cout << "По заданному id кухонной утвари не найдено";
				cout << endl;
			}
			else
			{
				cout << "Сведения о товаре с найденным id: ";
				cout << endl;
				kitchenware->Print();
				cout << endl;
			}
			break;

		// Распечатка списка кухонной утвари
		case 3:
			cout << "Выберите тип распечатки кухонной утвари: " << endl;
			cout << "1: Прямой обход" << endl;
			cout << "2: Обратный обход" << endl;
			cout << "3: Симметричный обход" << endl;
			cin >> tree;
			// Оработка распечатки дерева
			switch (tree)
			{
			// Распечатка прямым обходом
			case 1:
				StraightGoRound(Root); break;

			// Распечатка обратным обходом
			case 2:
				ReverseGoRound(Root); break;

			// Распечатка обратным обходом
			case 3:
				SymmetricGoRound(Root); break;
			}
			default:
				break;

		// Удаление из списка по id
		case 4:
			cout << "Введите id удаляемой куханной утвари: ";
			cin >> id;
			Remove(Root, id);
			cout << "Кухонная утварь удалена";
			cout << endl;
			break;

		// Прекращение работы с программой
		case 5:
			if (Root != NULL)
				DeleteTree(Root);
			return 0;

		}
	} while (act == 1 || act == 2 || act == 3 || act == 4 || act == 5);

	system("pause");
	return 0;
}
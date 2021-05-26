#include "AVL-Tree.h"

#include <Windows.h>
#include <string>
#include <iostream>
using namespace std;

// Возвращает уровени узла
int Height(Tree ptr)
{
	return ptr ? ptr->Height : 0;
}

// Вычисление разницы в балансе
int Balance(Tree ptr)
{
	return Height(ptr->Right) - Height(ptr->Left);
}

// Вычисление высоты дерева
void FindHeight(Tree ptr)
{
	int heightRight = Height(ptr->Right);
	int heightLeft = Height(ptr->Left);

	ptr->Height = max(heightLeft, heightRight) + 1;
}

// LL - поворот
void LL(Tree &ptr)
{
	Tree Left = ptr->Left;
	ptr->Left = Left->Right;
	Left->Right = ptr;
	FindHeight(ptr);
	ptr = Left;
	FindHeight(ptr);
}

// RR - поворот
void RR(Tree &ptr)
{
	Tree Right = ptr->Right;
	ptr->Right = Right->Left;
	Right->Left = ptr;
	FindHeight(ptr);
	ptr = Right;
	FindHeight(ptr);
}

// RL - поворот
void RL(Tree &ptr)
{
	LL(ptr->Right);
	RR(ptr);
}

// LR - поворот
void LR(Tree &ptr)
{
	RR(ptr->Left);
	LL(ptr);
}

// Балансировка дерева
bool Rotate(Tree &ptr)
{
	if (Balance(ptr) != 2 && Balance(ptr) != -2)
	{
		return 1;
	}
	else
	{
		if (Balance(ptr) == 2)
		{
			if (Balance(ptr->Right) >= 0)
			{
				RR(ptr);
				return 0;
			}
			else
			{
				RL(ptr);
				return 0;
			}
		}
		else
			if (Balance(ptr) == -2)
				if (Balance(ptr->Left) <= 0)
				{
					LL(ptr);
					return 0;
				}
				else
				{
					LR(ptr);
					return 0;
				}
	}
}

// Добавление вершины в дерево
void InsertInTree(Kitchenware* val, Tree &Root, bool &IfTurn)
{
	if (Root == NULL)
	{
		Root = new STree;
		Root->Data = val;
		Root->Height = 1;
		Root->Left = NULL;
		Root->Right = NULL;
	}

	else
		if (val->id < (*(Root->Data)).id)
			InsertInTree(val, Root->Left, IfTurn);
		else if (val->id > (*(Root->Data)).id)
			InsertInTree(val, Root->Right, IfTurn);
		else
		{
			cout << "Ошибка добавления" << endl;
			cout << "Товар с данным инвентарным номером уже существует" << endl;
			cout << endl;
			cout << "Информация о товаре с данным id: " << endl;
			Kitchenware* sameIdVal = FindInTree(val->id, Root);
			sameIdVal->Print();
			cout << endl;
			return;
		}

	FindHeight(Root);
	if (Rotate(Root))
		IfTurn = 1;
	else
		IfTurn = 0;
}

// Поиск в дереве
Kitchenware* FindInTree(int id, Tree Root)
{
	if (Root == NULL)
		return NULL;

	if (id < (*(Root->Data)).id)
		return FindInTree(id, Root->Left);
	else
		if (id > (*(Root->Data)).id)
			return FindInTree(id, Root->Right);

	return Root->Data;
}

// Поиск и удаление узла по id
void Remove(Tree &Root, int id)
{
	Tree ptr = Root, parent = NULL;

	while (ptr != NULL && (*(ptr->Data)).id != id)
	{
		parent = ptr;
		if (id < (*(ptr->Data)).id)
			ptr = ptr->Left;
		else
			ptr = ptr->Right;
	}

	if (ptr != NULL)
	{
		Tree removed = NULL;

		if (ptr->Left == NULL || ptr->Right == NULL)
		{
			Tree child = NULL;
			removed = ptr;

			if (ptr->Left != NULL)
				child = ptr->Left;
			else if (ptr->Right != NULL)
				child = ptr->Right;

			if (parent == NULL)
				Root = child;
			else
			{
				if (parent->Left == ptr)
					parent->Left = child;
				else
					parent->Right = child;
			}
		}
		else
		{
			Tree mostLeft = ptr->Right, mostLeftParent = ptr;

			while (mostLeft->Left != NULL)
			{
				mostLeftParent = mostLeft;
				mostLeft = mostLeft->Left;
			}

			ptr->Data = mostLeft->Data;
			ptr->Height = mostLeft->Height;
			removed = mostLeft;

			if (mostLeftParent->Left == mostLeft)
				mostLeftParent->Left = NULL;
			else
				mostLeftParent->Right = NULL;
		}

		delete removed;
	}

	if (parent != NULL)
	{
		FindHeight(parent);
		Rotate(parent);
	}
	else
	{
		FindHeight(Root);
		Rotate(Root);
	}
}

// Печать дерева с помощью прямого обхода
void StraightGoRound(Tree Root)
{
	if (Root != NULL)
	{
		(*(Root->Data)).Print();
		StraightGoRound(Root->Left);
		StraightGoRound(Root->Right);
	}
}

// Печать дерева с помощью обратного обхода
void ReverseGoRound(Tree Root)
{
	if (Root != NULL)
	{		
		ReverseGoRound(Root->Left);
		(*(Root->Data)).Print();
		ReverseGoRound(Root->Right);
	}
}

// Печать дерева с помощью симметричного обхода
void SymmetricGoRound(Tree Root)
{
	if (Root != NULL)
	{	
		SymmetricGoRound(Root->Left);
		SymmetricGoRound(Root->Right);
		(*(Root->Data)).Print();
	}
}

// Очищение памяти
void DeleteTree(Tree Root)
{
	if (Root -> Left)
		DeleteTree(Root->Left);
	if (Root -> Right)
		DeleteTree(Root->Right);

	delete Root;
}
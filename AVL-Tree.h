#pragma once

#include "Kitchenware.h"

// Структура, описывающая дерево
struct STree
{
	Kitchenware* Data;
	int Height;
	STree* Left;
	STree* Right;
};
typedef STree* Tree;

// Возвращает уровени узла
int Height(Tree ptr);

// Вычисление разницы в балансе
int Balance(Tree ptr);

// Вычисление высоты дерева
void FindHeight(Tree ptr);

// LL - поворот
void LL(Tree &ptr);

// RR - поворот
void RR(Tree &ptr);

// RL - поворот
void RL(Tree &ptr);

// LR - поворот
void LR(Tree &ptr);

// Балансировка дерева
bool Rotate(Tree &ptr);

// Добавление вершины в дерево
void InsertInTree(Kitchenware* val, Tree &Root, bool &IfTurn);

// Поиск в дереве
Kitchenware* FindInTree(int id, Tree Root);

// Поиск и удаление узла по id
void Remove(Tree &Root, int id);

// Печать дерева с помощью прямого обхода
void StraightGoRound(Tree Root);

// Печать дерева с помощью обратного обхода
void ReverseGoRound(Tree Root);

// Печать дерева с помощью симметричного обхода
void SymmetricGoRound(Tree Root);

// Очищение памяти
void DeleteTree(Tree Root);
#pragma once

#include "Kitchenware.h"

// ���������, ����������� ������
struct STree
{
	Kitchenware* Data;
	int Height;
	STree* Left;
	STree* Right;
};
typedef STree* Tree;

// ���������� ������� ����
int Height(Tree ptr);

// ���������� ������� � �������
int Balance(Tree ptr);

// ���������� ������ ������
void FindHeight(Tree ptr);

// LL - �������
void LL(Tree &ptr);

// RR - �������
void RR(Tree &ptr);

// RL - �������
void RL(Tree &ptr);

// LR - �������
void LR(Tree &ptr);

// ������������ ������
bool Rotate(Tree &ptr);

// ���������� ������� � ������
void InsertInTree(Kitchenware* val, Tree &Root, bool &IfTurn);

// ����� � ������
Kitchenware* FindInTree(int id, Tree Root);

// ����� � �������� ���� �� id
void Remove(Tree &Root, int id);

// ������ ������ � ������� ������� ������
void StraightGoRound(Tree Root);

// ������ ������ � ������� ��������� ������
void ReverseGoRound(Tree Root);

// ������ ������ � ������� ������������� ������
void SymmetricGoRound(Tree Root);

// �������� ������
void DeleteTree(Tree Root);
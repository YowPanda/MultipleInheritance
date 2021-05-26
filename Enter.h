#pragma once

#include "Pan.h"
#include "GasStove.h"
#include "ElectricStove.h"
#include "Multicooker.h"

// ���� ���������� � ��������
Pan* enterPan();

// ���� ���������� � ������� �����
GasStove* enterGasStove();

// ���� ���������� �� ������������� �����
ElectricStove* enterElectricStove();

// ���� ���������� � �����������
Multicooker* enterMulticooker();
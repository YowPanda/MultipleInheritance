#pragma once

#include "Pan.h"
#include "GasStove.h"
#include "ElectricStove.h"
#include "Multicooker.h"

// Ввод информации о кастрюле
Pan* enterPan();

// Ввод информации о газовой плите
GasStove* enterGasStove();

// Ввод информации об электрической плите
ElectricStove* enterElectricStove();

// Ввод информации о мультиварке
Multicooker* enterMulticooker();
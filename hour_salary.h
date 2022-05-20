#pragma once
#include "office.h"
class hour_salary :public Office {
public:
    hour_salary(int h, int r);
    int sal_calc();
};

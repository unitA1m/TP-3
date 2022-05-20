#pragma once
#include "office.h"
class percent_salary :public Office {
public:
    percent_salary(int p, int s);
    int sal_calc();
};


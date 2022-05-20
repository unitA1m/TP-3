#include "percent_salary.h"
#include "office.h"
percent_salary::percent_salary(int p, int s)
{
    per_rate = p; sam_sale = s;
}
int percent_salary::sal_calc() {
    int sal = (per_rate * sam_sale) / 100;
    return sal;
}
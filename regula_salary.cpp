#include "regula_salary.h"
#include "office.h"

regula_salary::regula_salary(int r, int d) {
	reg_sal = r; days = d;
}
int regula_salary::sal_calc() {
	int sal = reg_sal * days;
	return sal;
}


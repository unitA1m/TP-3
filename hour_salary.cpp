#include "hour_salary.h"
#include "office.h"

hour_salary::hour_salary(int h, int r) {
	hour = h; rate = r;
}
int hour_salary::sal_calc() {
	int sal = hour * rate;
	return sal;
}

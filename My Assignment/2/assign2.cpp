#include "opover.h"
#include <cstdio>

int main(void)
{
	int m, s;
	printf("Enter First Money and Paisa= ");
	scanf("%d%d", &m, &s);
	Interval a(m, s);

	printf("Second Money and Paisa= ");
	scanf("%d%d", &m, &s);
	Interval b(m, s);

	Interval c = a + b; //a.operator+(b)
	printf("Total Addition Of Money= ");
	c.Print();

	Interval d = a - b; //a.operator-(b)
	printf("Total Subtraction Of Money= ");
	d.Print();
}

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define x (16.55 * pow(10, -3))
#define y (-2.75)
#define z (0.15)

int main()
{
	setlocale(LC_ALL, "RUS");

	double Beta = sqrt(10 * (pow(x, 1. / 3) + pow(x, y + 2))) * (pow(asin(z), 2) - fabs(x - y));

	printf("%lf", Beta);

	return 0;
}
# Домашние задание к работе номер 4
## Условие Задачи
Создать программу вычисления указанной величины. Результат проверить при заданных исходных значениях.
## 1. Алгоритм и блок-схема
### Алгоритм:
1. Начало
2. Объявить константы:
- **x** - переменная x.
- **y** - переменная y.
- **z** - переменная z.
3. Объявить переменную формулы:
- **Beta** - формула.
4. Вывести решение формулы.
5. Конец.
### Блок-схема:
![diagram](https://github.com/ArtificialEntity/Lab_05/blob/main/Lab_05_Diagram.png)
## 2. Реализация программы
```﻿#define _CRT_SECURE_NO_WARNINGS
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
```
## 3. Результаты работы программы
40.630694
## 4. Информация о разработчике
Коваленко Вадим Валерьевич, бТИИ-261

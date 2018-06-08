#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>


void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int n = 0;

start:
	printf("Введите номер задания:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	Напишите функцию int f(int h, int m, int s), которая принимает три целых аргумента (часы h, минуты m и секунды s) 
		//      и возвращает количество секунд, прошедших с начала дня.

		int h = 0, m = 0, s = 0, f = 0;

		h = 1 + rand() % 24;
		m = 1 + rand() % 60;
		s = 1 + rand() % 60;

		printf("\n Часы = %d, Минуты = %d, Секунды = %d\n", h, m, s);

		f = (h % 12) * 3600 + m * 60 + s;

		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 2);
		printf("Количество секунд, прошедших с начала дня = %d\n", f);
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");

	}

	else if (n == 2)
	{
		//2.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) 
		//      и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 дней.

		int m = 0, d = 0, f = 0;

		m = 1 + rand() % 15;
		d = 1 + rand() % 30;


		printf("\n Месяц = %d, День = %d\n", m, d);

		if (m >= 1 && m <= 12)
		{
			f = (m * 30) + d;

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			printf("Количество дней, прошедших с начала года = %d\n", f);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			printf("Такого месяца нет\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

	}

	else if (n == 3)
	{
		//	3.	Напишите функцию int f(int m, int d), которая принимает два целых аргумента (месяц m и день d) 
		// и возвращает количество дней, прошедших с начала года. Считаем, что в каждом месяце 30 или 31дней, а год не високосный.

		int m = 0, d = 0, f = 0;

		printf("Введите месяц:\t");
		scanf("%d", &m);

		printf("Введите день:\t");
		scanf("%d", &d);

		switch (m)
		{

		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:

		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			f = (m * 31) + d;
			printf("Количество дней, прошедших с начала года = %d\n", f);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");

		}

		break;

		case 4:
		case 6:
		case 9:
		case 11:

		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			f = (m * 30) + d;
			printf("Количество дней, прошедших с начала года = %d\n", f);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		break;

		case 2:

		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			f = (m * 28) + d;
			printf("Количество дней, прошедших с начала года = %d\n", f);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		break;

		}


	}

	else if (n == 4)
	{
		//	4.	Напишите функцию f(int& m1, int& m0, int N), которая возвращает первую и последнюю цифры двузначного натурального числа N.
		int N = 0, m1 = 0, m0 = 0;

		N = 10 + rand() % 99;

		printf("N = %d\n", N);

		m0 = N % 10;
		m1 = (N - m0) / 10;

		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 13);
		printf("Первая цифра двузначного натурального числа N = %d\n", m1);
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 11);
		printf("Последняя цифра двузначного натурального числа N = %d\n", m0);
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");

	}

	else if (n == 5)
	{
		//	5.	Напишите функцию int f(int m1, int m2, int m3), которая находит наименьшее число из заданного набора трех целых чисел. 
		//      Используйте условный оператор if

		int m1 = 0, m2 = 0, m3 = 0, min = 0;

		m1 = 1 + rand() % 1000;
		m2 = 1 + rand() % 1000;
		m3 = 1 + rand() % 1000;

		printf("m1 = %d, m2 = %d, m3 = %d\n", m1, m2, m3);

		if (m1 < m2 && m1 < m3)
		{
			min = m1;

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 10);
			printf("Наименьшее число m1 = %d\n", min);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else if (m2 < m1 && m2 < m3)
		{
			min = m2;

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 10);
			printf("Наименьшее число m2 = %d\n", min);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");

		}

		else if (m3 < m1 && m3 < m2)
		{
			min = m3;

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 10);
			printf("Наименьшее число m3 = %d\n", min);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");

		}

		else
		{

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 4);
			printf("Нет таких чисел.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}



	}

	else if (n == 6)
	{
		//6.	Напишите функцию f(int m, int n), которая определяет для пары целых чисел m и n, кратно ли второе число первому

		int m = 0, n = 0;

		//m = 1 + rand() % 1000;
		//n = 1 + rand() % 1000;

		//printf("m = %d, n = %d\n", m, n);

		printf("Введите m:\t");
		scanf("%d", &m);

		printf("Введите n:\t");
		scanf("%d", &n);


		if (m % n == 0)
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 3);
			printf("Число n кратно числу m.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else if (n % m == 0)
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 3);
			printf("Число m кратно числу n.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 5);
			printf("Ни m ни n некратны друг другу.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");

		}

	}

	else
	{
		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 4);
		printf("Такого задания нет. Введите другое.\n");
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");
	}

	goto start;
}
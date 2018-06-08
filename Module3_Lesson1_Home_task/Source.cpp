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
	printf("������� ����� �������:\t");
	scanf("%d", &n);

	if (n == 1)
	{
		//1.	�������� ������� int f(int h, int m, int s), ������� ��������� ��� ����� ��������� (���� h, ������ m � ������� s) 
		//      � ���������� ���������� ������, ��������� � ������ ���.

		int h = 0, m = 0, s = 0, f = 0;

		h = 1 + rand() % 24;
		m = 1 + rand() % 60;
		s = 1 + rand() % 60;

		printf("\n ���� = %d, ������ = %d, ������� = %d\n", h, m, s);

		f = (h % 12) * 3600 + m * 60 + s;

		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 2);
		printf("���������� ������, ��������� � ������ ��� = %d\n", f);
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");

	}

	else if (n == 2)
	{
		//2.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d) 
		//      � ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ����.

		int m = 0, d = 0, f = 0;

		m = 1 + rand() % 15;
		d = 1 + rand() % 30;


		printf("\n ����� = %d, ���� = %d\n", m, d);

		if (m >= 1 && m <= 12)
		{
			f = (m * 30) + d;

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			printf("���������� ����, ��������� � ������ ���� = %d\n", f);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			printf("������ ������ ���\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

	}

	else if (n == 3)
	{
		//	3.	�������� ������� int f(int m, int d), ������� ��������� ��� ����� ��������� (����� m � ���� d) 
		// � ���������� ���������� ����, ��������� � ������ ����. �������, ��� � ������ ������ 30 ��� 31����, � ��� �� ����������.

		int m = 0, d = 0, f = 0;

		printf("������� �����:\t");
		scanf("%d", &m);

		printf("������� ����:\t");
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
			printf("���������� ����, ��������� � ������ ���� = %d\n", f);
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
			printf("���������� ����, ��������� � ������ ���� = %d\n", f);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		break;

		case 2:

		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 12);
			f = (m * 28) + d;
			printf("���������� ����, ��������� � ������ ���� = %d\n", f);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		break;

		}


	}

	else if (n == 4)
	{
		//	4.	�������� ������� f(int& m1, int& m0, int N), ������� ���������� ������ � ��������� ����� ����������� ������������ ����� N.
		int N = 0, m1 = 0, m0 = 0;

		N = 10 + rand() % 99;

		printf("N = %d\n", N);

		m0 = N % 10;
		m1 = (N - m0) / 10;

		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 13);
		printf("������ ����� ����������� ������������ ����� N = %d\n", m1);
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 11);
		printf("��������� ����� ����������� ������������ ����� N = %d\n", m0);
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");

	}

	else if (n == 5)
	{
		//	5.	�������� ������� int f(int m1, int m2, int m3), ������� ������� ���������� ����� �� ��������� ������ ���� ����� �����. 
		//      ����������� �������� �������� if

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
			printf("���������� ����� m1 = %d\n", min);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else if (m2 < m1 && m2 < m3)
		{
			min = m2;

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 10);
			printf("���������� ����� m2 = %d\n", min);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");

		}

		else if (m3 < m1 && m3 < m2)
		{
			min = m3;

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 10);
			printf("���������� ����� m3 = %d\n", min);
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");

		}

		else
		{

			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 4);
			printf("��� ����� �����.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}



	}

	else if (n == 6)
	{
		//6.	�������� ������� f(int m, int n), ������� ���������� ��� ���� ����� ����� m � n, ������ �� ������ ����� �������

		int m = 0, n = 0;

		//m = 1 + rand() % 1000;
		//n = 1 + rand() % 1000;

		//printf("m = %d, n = %d\n", m, n);

		printf("������� m:\t");
		scanf("%d", &m);

		printf("������� n:\t");
		scanf("%d", &n);


		if (m % n == 0)
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 3);
			printf("����� n ������ ����� m.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else if (n % m == 0)
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 3);
			printf("����� m ������ ����� n.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");
		}

		else
		{
			printf("-----------------------------------------------------\n");

			SetConsoleTextAttribute(hConsole, 5);
			printf("�� m �� n �������� ���� �����.\n");
			SetConsoleTextAttribute(hConsole, 15);

			printf("-----------------------------------------------------\n");

		}

	}

	else
	{
		printf("-----------------------------------------------------\n");

		SetConsoleTextAttribute(hConsole, 4);
		printf("������ ������� ���. ������� ������.\n");
		SetConsoleTextAttribute(hConsole, 15);

		printf("-----------------------------------------------------\n");
	}

	goto start;
}
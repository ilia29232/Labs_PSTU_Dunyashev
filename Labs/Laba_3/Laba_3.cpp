#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a = 1, b = 2;//границы изменения аргумента x
	int k = 10;//количество шагов
	double h = (b - a) / k;//шаг изменения x
	int n = 15;//заданное количество слагаемых
	double eps = 0.0001;//заданная точность
	double x, an, SN, SE, Y;
	int i;

	for (int j = 0; j <= k; j++)//внешний цикл: изменение x от a до b
	{
		x = a + j * h;

		//сумма для заданного n (арифметический цикл)
		an = 1;//первый член ряда
		SN = 1;
		for (i = 1; i <= n; i++)
		{
			an = an * x / i;//рекуррентная формула: a*(i) = a*(i-1) * x / i
			SN += an;
		}

		//сумма для заданной точности (итерационный цикл)
		an = 1;//первый член ряда
		SE = 0;
		i = 0;
		while (an >= eps)//точность достигнута, если an < eps
		{
			SE += an;
			i++;
			an = an * x / i;
		}

		Y = exp(x);//точное значение функции

		cout << "X=" << x << " SN=" << SN << " SE=" << SE << " Y=" << Y << endl;
	}
	return 0;
}

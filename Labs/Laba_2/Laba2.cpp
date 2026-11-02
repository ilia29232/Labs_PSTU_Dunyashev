#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double eps = 0.0001;//заданная точность 10**-4
	double a = 1;//первый член ряда 1
	double sum = 0;//сумма ряда
	int n = 1;//номер текущего члена ряда

	while (fabs(a) >= eps)//точность достигнута, если |an| < eps
	{
		sum += a;//добавляем текущий член ряда к сумме
		a = -a * pow(n / (n + 1.0), n) / (n + 1);//рекуррентная формула
		n++;//переходим к следующему члену ряда
	}

	cout << "Сумма ряда с точностью 0.0001 равна " << sum << endl;
	cout << "Количество просуммированных членов ряда: " << n - 1 << endl;
	return 0;
}

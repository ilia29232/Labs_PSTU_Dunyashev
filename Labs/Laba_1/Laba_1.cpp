#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    //задача номер 1
    setlocale(LC_ALL, "Russian");

    float af = 1000.0f;//добавляю переменную a с типом float
    float bf = 0.0001f;//добавляю переменную b с типом float
    float cf;//добавляю переменную c с типом float для деления chis_f и znam_f

    float chis_f = (af - bf) * (af - bf) * (af - bf) - (af * af * af - 3 * af * af * bf);//расчет числителя 
    float znam_f = bf * bf * bf - 3 * af * bf * bf;//расчет знаменателя

    cf = chis_f / znam_f;//расчет результата деления

    cout << "при типе float результат = " << cf << endl;//вывод результата с типом float

    double ad = 1000;//добавляю переменную a с типом double
    double bd = 0.0001;//добавляю переменную b с типом double
    double cd;//добавляю переменную c с типом double как в cf

    double chis_d = (ad - bd) * (ad - bd) * (ad - bd) - (ad * ad * ad - 3 * ad * ad * bd);// по аналогии с прошлым
    double znam_d = bd * bd * bd - 3 * ad * bd * bd;

    cd = chis_d / znam_d;//расчет результата деления

    cout << "при типе double результат = " << cd << endl << endl;//вывод результата double

    //задача номер 2
    double m = 3;//задаю любые m 
    double n = 4;//задаю любые n 

    cout << "Значение первого выражения равно " << (--m - ++n) << endl;

    cout << "Значение второго выражения равно " << (n*m < n++) << "(0-неверно,1-верно)" << endl;

    cout << "Значение третьего выражения равно " << (n-- > m++) << "(0-неверно,1-верно)" << endl;
    return 0;
}
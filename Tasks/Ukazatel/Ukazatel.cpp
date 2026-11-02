#include <iostream>
#include <clocale>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    task1();
    task2();
    task3();
    task4();
    task5();
    return 0;


void task1() //Задача 1
{
    int a = 10;
    int b = 20;
    int& r = a;
    r = b;
    r++;
    cout << "Задача 1: " << a << " " << b << endl;
}

void task2() //Задача 2
{
    int a = 12;
    int* ptr = &a;
    int copy = *ptr;
    (*ptr)++;
    cout << "Задача 2: " << a << " " << copy << endl;
}

void task3() //Задача 3
{
    int a = 4, b = 9;
    int* p = &a;
    int* q = p;
    int& r = *p;
    p = &b;
    *q += *p;
    *p = r - 3;
    q = p;
    *q += r;
    cout << "Задача 3: " << a << " " << b << " " << r << "  p указывает на b: " << (p == &b) << ", q указывает на b: " << (q == &b) << ", r - псевдоним a: " << (&r == &a) << endl;
}

void task4() //Задача 4
{
    int a = 5, b = 8;
    int& r = a;
    int& s = a;
    int copy = a;
    r = b;
    s += 2;
    b = copy;
    cout << "Задача 4: " << a << " " << b << " " << r << " " << s << " " << copy << endl;
}

void task5() //Задача 5
{
    int a = 2, b = 5, c = 8;
    int* p = &a;
    int& r = a;
    int copy = *p;
    *p = b;
    p = &c;
    r = *p;
    *p = b + copy;
    p = &b;
    *p = r - copy;
    r++;
    cout << "Задача 5: " << a << " " << b << " " << c << " " << copy << "  p указывает на b: " << (p == &b) << ", r — псевдоним a: " << (&r == &a) << endl;
}
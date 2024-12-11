﻿#include <locale.h>
#include <iostream>
using namespace std;

template<typename T>
T Abs(T num);

int main()
{
    setlocale(LC_ALL, "ru");
    
    int n;
    cout << "Введите число: ";
    cin >> n;

    cout << "Число " << n << " по модулю = " << Abs(n);
}

template<typename T>
T Abs(T num)
{
    T abs_num = num > 0 ? num : -num;

    return abs_num;
}

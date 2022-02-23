// Math test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int res = 0;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9;
    int a = rand() % 2+2;
    int a1= rand() % 4+2;
    int b= rand() % 9;
    int b1 = rand() % 9;
    int c= rand() % 99;
    int d= rand() % 99;
    int e = rand() % 999;
    cout << "Привіт! Ти знаходишся на перевірці знання множення" << endl;
    cout << "Рівень перший" << endl;
    cout << "Напиши результат множення " << a << " на " << a1 <<endl;
    cin >> n1;
    if (n1 == a * a1) res++;
    cout << "Напиши результат множення " << a << " на " << b << endl;
    cin >> n2;
    if (n2 == a * b) res++;
    cout << "Напиши результат множення " << a1 << " на " << b1 << endl;
    cin >> n3;
    if (n3 == a1 * b1) res++;
    cout << "Рівень другий" << endl;
    cout << "Напиши результат множення " << a << " на " << c << endl;
    cin >> n4;
    if (n4 == a * c) res++;
    cout << "Напиши результат множення " << a1 << " на " << d << endl;
    cin >> n5;
    if (n5 == a1 * d) res++;
    cout << "Напиши результат множення " << b << " на " << b1 << endl;
    cin >> n6;
    if (n6 == b * b1) res++;
    cout << "Рівень третій" << endl;
    cout << "Напиши результат множення " << a << " на " << e << endl;
    cin >> n7;
    if (n7 == a * e) res++;
    cout << "Напиши результат множення " << b << " на " << e << endl;
    cin >> n8;
    if (n8 == b * e) res++;
    cout << "Напиши результат множення " << c << " на " << d << endl;
    cin >> n9;
    if (n9 == c * d) res++;
    ofstream fileOut;
    string pas = "C:/Users/Саша/Desktop/result 1.txt";
    fileOut.open(pas);
    if (!fileOut.is_open())
    {
        cout << "File dont open" << endl;
    }
    else {
        cout << "File open" << endl;
        fileOut << "Правильних відповідей: " << res << endl;
    }    
    cout << endl;
    cout << "Правильних відповідей: " << res << endl;
    if (res <= 3) {
        cout << "Низький рівень знань" << endl;
        fileOut << "Низький рівень знань" << endl;
    }
    else if (res > 3 && res <= 6) {
        cout << "Середній рівень знань" << endl;
        fileOut << "Середній рівень знань" << endl;
    }
    else {
        cout << "Високий рівень знань" << endl;
        fileOut << "Високий рівень знань" << endl;
    }
    fileOut.close();
}



﻿// №1(b).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    char n;
tryAgain:
    cout << "Введiть номер автобуса вiд 1 до 7 = ";
    cin >> n;

    switch (toupper(n))
    {
    case '1': cout << "11 зупинок    "; break;
    case '2': cout << "15 зупинок    "; break;
    case '3': cout << "19 зупинок    "; break;
    case '4': cout << "12 зупинок    "; break;
    case '5': cout << "14 зупинок    "; break;
    case '6': cout << "16 зупинок    "; break;
    case '7': cout << "15 зупинок    "; break;
    default: cout << "Не знайдено!   " << endl;
        goto tryAgain;
    }

    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

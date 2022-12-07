// №1(а).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    
    int n;
    cout << "Введiть номер автобуса вiд 1 до 7 = ";
    cin >> n;

    if (n == 1)
        cout << "11 зупинок" << endl;
    else if (n == 2)
        cout << "15 зупинок" << endl;
    else if (n == 3)
        cout << "19 зупинок" << endl;
    else if (n == 4)
        cout << "12 зупинок" << endl;
    else if (n == 5)
        cout << "14 зупинок" << endl;
    else if (n == 6)
        cout << "16 зупинок" << endl;
    else if (n == 7)
        cout << "15 зупинок" << endl;
    else
        cout << "Не знайдено!" << endl;

 
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

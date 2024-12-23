// t.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "custom_ifstream.h"
#include "custom_ofstream.h"
#include "custom_console_istream.h"
#include "custom_console_ostream.h"

int main()
{
    custom_console_ostream cout;
    custom_console_ostream cout2;
    custom_console_ostream cout3;
    custom_console_ostream cout4;
    cout << 5;
    custom_console_istream cin;
    int a;
    cin >> a;
    cout << a;
    cout2 << a;
    cout3 << a;
    cout4 << a;
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

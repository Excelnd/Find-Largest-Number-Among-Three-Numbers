// Find Largest Number Among Three Numbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int one, two, three;

	cout << "Enter Numbers\n\n";

	cout << "Enter First Number: ";
	cin >> one;
	cout << "Enter Second Number: ";
	cin >> two;
	cout << "Enter Third Number: ";
	cin	>> three;

	if (one > two && one > three)
		cout << one << " Is Largest Number among these three Numbers\n";

	if (two > one && two > three)
		cout << two << " Is Largest Number among these three Numbers\n";

	if (three > one && three > two)
		cout << three << " Is Largest Number among these three Numbers\n";


    return 0;
}


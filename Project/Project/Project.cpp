//Project.cpp

#include "stdafx.h"
#include <iostream>
//#include "funcs.h"
using namespace std;

int main()
{
	int count;
	double a, b;

	cout << "Give me first number: ";
	cin >> a;

	cout << "Give me second number: ";
	cin >> b;

	cout << "Select the operation:" << endl;
	cout << "   1. Addition" << endl;
	cout << "   2. Subtraction" << endl;
	cout << "   3. Multiplication" << endl;
	cout << "   4. Division" << endl;
	cin >> count;

	switch (count)
	{
		case 1:
		{
			cout << "DEVELOP 1" << endl;
			break;
		}

		case 2:
		{
			cout << "DEVELOP 2" << endl;
			break;
		}

		case 3:
		{
			cout << "DEVELOP 3" << endl;
			break;
		}

		case 4:
		{
			cout << "DEVELOP 4" << endl;
			break;
		}

		default:
		{
			cout << "ERROR" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Input a=";
	cin >> a;
	cout << "Input b=";
	cin >> b;
	if (b != 0) c = a / b;
	else cout << "Error";
	cout << "c=" << c << endl;
	system("pause");
	return 0;
}




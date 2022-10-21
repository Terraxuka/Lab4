// Lab_4_3.сpp
// Мельничук Юліан
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами.
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, x, xp, xk, dx, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0||b != 0)
			F = a*x*x+b*x*x;
		else
			if (x > 0||b = 0)
				F = (x-a)/(x-c);
			else
				F = (x+5)/(c*(x-10));
		
		cout << " |" << setw(5) << setprecision(3) << F << " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}

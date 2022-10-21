// Lab_4_2.сpp
// Мельничук Юліан
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	A = 13.5 - 2 * x;
	while (x <= xk)
	{
		if (x <= -1)
			B = exp(x);
		else
			if ()
				B = cos(x) / (1 + sin(x) * sin(x));
			else
				B = 1 - (sin(x) * sin(x));
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}

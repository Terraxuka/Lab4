// Lab_4_1.сpp
// Мельничук Юліан
// Лабораторна робота № 4.1
// Цикли.
// Варіант 18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	N = 15;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (cos(1. * i))/(1+sin(1.*i)*sin(1.*i));
		i++;
	}
	cout << S << endl;
	S = 0;
	i = k;
	do {
		S += (cos(1. * i)) / (1 + sin(1. * i) * sin(1. * i));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (cos(1. * i)) / (1 + sin(1. * i) * sin(1. * i));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (cos(1. * i)) / (1 + sin(1. * i) * sin(1. * i));
	}
	cout << S << endl;
	return 0;	
}
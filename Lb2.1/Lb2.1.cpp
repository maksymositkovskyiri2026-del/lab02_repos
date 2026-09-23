// Lab_02.cpp
// Осітковський Максим
// Лабораторна робота № 2.
// Лінійні програми
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a;  // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	//double z2; // результат обчислення 2-го виразу

	cout << "a = ";
	cin >> a;

	// Виправлено групування дужок для чисельника (1 + a + a^2)
	z1 = pow(((1 + a + pow(a, 2)) / (2 * a + pow(a, 2))) + 2 - ((1 - a + pow(a, 2)) / (2 * a - pow(a, 2))), -1) * (5 - 2 * pow(a, 2));
	//z2 = (4 - pow(a, 2)) / 2.0;

	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
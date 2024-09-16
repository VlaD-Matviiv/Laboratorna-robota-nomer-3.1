// Lab_3_1.cpp
// <Матвіїв Владислав>
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;   // вхідний параметр
	double y;   // результат обчислення виразу
	double A;   // проміжний результат- функціонально стала частина виразу
	double B;   // проміжний результат- функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	A = 2 + 6 * x;

	// спосіб 1: розгалуження в короткій формі
	if (x <= 0)
		B = log(cos(x)) + (x + x + x + x + x);
	if (0 < x && x <= 3)
		B = cos((1 + log(x)) / 3) / sin((1 + log(x)) / 3);
	if (x > 3)
		B = 12 * x - (x * x * x * x * x * x * x * x);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;


	// спосіб 2: розгалуження в повній формі
	if (x <= 0)
		B = log(cos(x)) + (x + x + x + x + x);
	else
		if (x > 3)
			B = 12 * x - (x * x * x * x * x * x * x * x);
		else
			B = cos((1 + log(x)) / 3) / sin((1 + log(x)) / 3);

	y = A + B;

	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
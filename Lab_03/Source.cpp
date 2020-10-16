// Lab_03_1.cpp
// Рехтман Михайло
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y; 
	double A; 
	double B; 
	cout << "x = "; cin >> x;

	A = (x*x)+sin((4*x)/3);
	// спосіб 1: розгалуження в скороченій формі
	if (x<(-5))
		B = 1/tan(x);
	if (-5 <= x && x < 0)
		B = 4-((x*x)/2);
	if (x > 0)
		B = log10(x*x)-((4*x)/3);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	return 0;
}
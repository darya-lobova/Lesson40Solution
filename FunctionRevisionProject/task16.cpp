// Задание 16: Добавьте прототип функции, которая принимает вещественное 
// и большое целое значения и возвращает их сумму.

#include <iostream>
using namespace std;

float sum(float a, long long b);

int main()
{
	cout << sum(3.5f, 10000000000LL);
	return 0;
}

float sum(float a, long long b)
{
	return a + b;
}


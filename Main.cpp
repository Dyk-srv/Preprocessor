#include <iostream>
#include "H1.h"

#define _PI 3.14
#define forever for (int fori = 0;; fori++)
#define begin {
#define end }

#define sum(a, b) a + b
#define print_arr(a, s) std::cout << "[";\
for (int i = 0; i < s; i++)\
	std::cout << a[i] << ", ";\
std::cout << "\b\b]\n"

#if 5 < 4

#define var 667

#elif 5 == 4 

#define var 0

#else

#define show(p) std::cout << #p << std::endl
#define var(name) std::cout << #name << " = " << name << std::endl
#define concat(a,b) a ## b

#endif


#ifndef PI

void foo() {}

#endif



int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Простые объекты препроцессора
	/*std::cout << "Pi = " << _PI << std::endl;	// _PI заменяется на 3.14 после обработки препроцессором
	//_PI = 3;	// ОШИБКА!

	forever begin
		std::cout << '.';
		if (fori >= 20)
			break;
		*/


	// Макросы препроцессора
	/*std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	
	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	std::cout << "Введите два числа -> ";
	print_arr(arr, size);*/

	// Операторы препроцессора
	show(I love C++);
	n = 10;
	var(n);
	double tmp = 1.55;
	var(tmp);
	std::cout << "tmp = " << concat(t, mp) << std::endl;
	std::cout << _PI << std::endl;

#undef _PI
	
	//std::cout << _PI << std::endl;	// ОШИБКА, т.к. _PI не обнаружено

#define _PI 3

	std::cout << _PI << std::endl;



	return 0;
}
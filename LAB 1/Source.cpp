#include <iostream>

int main() {

	long long int a = 260; // long long int была использована из-за того что для  5 степень числа 'a' слишком велика для 16 и 32 бит.
	char x = 'a';  // Обозначим символ a как переменную x.

	std::cout << "Max for char=" << sizeof(char) << std::endl; // максимальное кол-во байт для char
	std::cout << "Max for double=" << sizeof(double) << std::endl; // максимальное кол-во байт для double
	std::cout << "Max for int=" << sizeof(int) << std::endl; // максимальное кол-во байт для int
	std::cout << "Max for bool=" << sizeof(bool) << std::endl; // максимальное кол-во байт для bool

	std::cout << "a*a*a*a=" << a * a*a*a << std::endl; // возводим число а в четвёртую степень
	std::cout << "a*a*a*a*a=" << a * a*a*a*a << std::endl; // возводим число а в пятую степень

	std::cout << "'a'+53=" << x + 53 << std::endl; // cимвол 'a' по таблице ASCII имеет код 97
	std::cout << "37+'a'=" << 37 + x << std::endl; // cимвол 'a' по таблице ASCII также имеет код 97
	getchar();

	return 0;
}
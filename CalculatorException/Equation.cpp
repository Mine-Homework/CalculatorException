#include "Equation.h"

Equation::Equation() : a(0), b(0), c(0)
{
}

void Equation::inputA()
{
	setlocale(LC_ALL, "rus");
	std::cout << "\n>  Введите а -> ";
	if (!(std::cin >> a)) {
		throw std::exception("Вы ввели неправильное значение для а!");
	}
	if (a == 0) {
		throw std::exception("Значение а не может быть = 0!");
	}
}

void Equation::inputB()
{
	setlocale(LC_ALL, "rus");
	std::cout << "\n>  Введите b -> ";
	if (!(std::cin >> b)) {
		throw std::exception("Вы ввели неправильное значение для b!");
	}
}

void Equation::inputC()
{
	setlocale(LC_ALL, "rus");
	std::cout << "\n>  Введите c -> ";
	if (!(std::cin >> c)) {
		throw std::exception("Вы ввели неправильное значение для c!");
	}
}

void Equation::searchDisk()
{
	setlocale(LC_ALL, "rus");
	float x1;
	float x2;
	double diskr = (b * b) - 4 * a*c;
	std::cout << "\n>   Дискриминант = " << diskr << std::endl;
	if (diskr < 0) {
		throw std::exception("Дискриминант < 0 !");
	}
	if (diskr == 0) {
		x1 = (-b) / (2 * a);

		std::cout << "\n>   X = " << std::setprecision(3) << x1 << std::endl;
	}
	if (diskr > 0) {
		x1 = (-b + sqrt(diskr)) / (2 * a);
		x2 = (-b - sqrt(diskr)) / (2 * a);

		std::cout << "\n>   X1 = " << x1 << std::endl;
		std::cout << "\n>   X2 = " << x2 << std::endl;
	}
}

bool Equation::inputData()
{
	setlocale(LC_ALL, "rus");
	try {
		inputA();
		inputB();
		inputC();
		searchDisk();
		return true;
	}
	catch (const std::exception &except) {
		std::cerr << "\n> Исключение: " << except.what() << std::endl;
		std::cout << "  Решение квадратного уравнение невозможно!" << std::endl;
		return false;
	}
}

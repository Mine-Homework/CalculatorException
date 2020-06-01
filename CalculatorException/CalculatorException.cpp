#include "PCH.h"
#include "Equation.h"

int main()
{
	setlocale(LC_ALL, "rus");
	// Start ->
	Equation q;
	char choice = 'n';
	do {
		system("cls");
		q.inputData();
		std::cout << "\n> Продолжить? (y/n) -> ";
		std::cin >> choice;
	} while (choice == 'y');

	// Finish ->
    std::cout << "\n> Программа завершена (0_0) " << std::endl;
}
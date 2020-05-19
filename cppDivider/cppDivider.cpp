#include "stdafx.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian"); //Пришлось добавить смену кодировки, поскольку консоль выводила вообще другие буквы
	int a, b;
	std::cout << "Введите делимое: ";
	std::cin >> a;
	std::cout << "Введите делитель: ";
	std::cin >> b;
	int t = 0;
	while (a > b)
	{
		a = a - b;
		t++;
	}
	std::cout << "Целая часть: " << t << std::endl;
	std::cout << "Остаток: " << a << std::endl;
	system("pause"); //Чтобы программа не закрылась сразу после вывода
    return 0;
}


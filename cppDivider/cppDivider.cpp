#include "stdafx.h"
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian"); //�������� �������� ����� ���������, ��������� ������� �������� ������ ������ �����
	int a, b;
	std::cout << "������� �������: ";
	std::cin >> a;
	std::cout << "������� ��������: ";
	std::cin >> b;
	int t = 0;
	while (a > b)
	{
		a = a - b;
		t++;
	}
	std::cout << "����� �����: " << t << std::endl;
	std::cout << "�������: " << a << std::endl;
	system("pause"); //����� ��������� �� ��������� ����� ����� ������
    return 0;
}


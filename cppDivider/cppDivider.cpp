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
	if (b == 0)
	{
		std::cout << "������ ������ �� ����!" << std::endl;
		system("pause"); //����� ��������� �� ��������� ����� ����� ������
		return -1;
	}
	int t = 0;
	if (a > 0)
		if (b > 0)
			while (a >= b)
			{
				a -= b;
				t++;
			}
		else
			while (a >= -b)
			{
				a += b;
				t--;
			}
	else
		if (b > 0)
			while (-a >= b)
			{
				a += b;
				t--;
			}
		else
			while (a <= b)
			{
				a -= b;
				t++;
			}
	std::cout << "����� �����: " << t << std::endl;
	std::cout << "�������: " << a << std::endl;
	system("pause"); //����� ��������� �� ��������� ����� ����� ������
    return 0;
}


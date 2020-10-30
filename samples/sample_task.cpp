#include <algorithm>
#include <ctime>
#include <random>
#include <iomanip>
#include <iostream>
#include <vector>
#include "Curves.h"
#include "Circle.h"
#include "Elips.h"

int main()
{
	system("chcp 1251>nul");
	std::mt19937 random;
	random.seed(static_cast<unsigned int>(time(0)));
	const int sizeVector = 12;
	float Total_area_of_all_circles = 0;
	float Total_area_of_all_ellipses = 0;
	int count_circles = 0;
	int count_ellipses = 0;

	//�������� ��������� ������ �������
	std::vector<std::unique_ptr<Curves>> vectorFigures(sizeVector);
	std::cout << "������� ������: " << std::endl;
	for (int i = 0; i < sizeVector; i++)
	{
		Curves* tmp;
		if (rand() % 2 == 0)
			vectorFigures.at(i) = std::make_unique<Circle>(Circle(static_cast<double>(rand() % 100)));
		else
			vectorFigures.at(i) = std::make_unique<Elips>(Elips(static_cast<double>(rand() % 100), static_cast<double>(rand() % 100)));

		std::cout << vectorFigures.at(i)->Calculate_area() << " ";
	}
	//--------------------------------------//

	//��������� ������ �� ���������� �������
	std::sort(vectorFigures.begin(), vectorFigures.end(), [](std::unique_ptr<Curves>& c1, std::unique_ptr<Curves>& c2) -> bool { return c1->Calculate_area() < c2->Calculate_area(); });
	std::cout << std::endl << std::endl;
	//--------------------------------------//

	//������� ��������������� ������
	std::cout << "��������� ������ � ������� ����������� ��������: " << std::endl;
	for (auto const& element : vectorFigures)
	{
		std::cout << element->Calculate_area() << " ";
	}
	std::cout << std::endl << std::endl;
	//--------------------------------------//

	//������� ��������� �������������� ����� 
	for (auto const& element : vectorFigures)
	{
		if (typeid(*element) == typeid(Circle))
		{
			Total_area_of_all_circles += element->Calculate_area();
			count_circles++;
		}
		else
		{
			Total_area_of_all_ellipses += element->Calculate_area();
			count_ellipses++;
		}
	}
	//--------------------------------------//

	//������� ��������������
	std::cout << std::fixed << std::setprecision(2) << "������ ������� ���� �����������: " << Total_area_of_all_circles << std::endl;
	std::cout << "���-�� �����������: " << count_circles << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "������ ������� ���� �������: " << Total_area_of_all_ellipses << std::endl;
	std::cout << "���-�� �������: " << count_ellipses << std::endl;
	std::cout << std::fixed << std::setprecision(2) << "����� ������� ���� �����: " << Total_area_of_all_ellipses + Total_area_of_all_circles << std::endl;
	//--------------------------------------//

	//����������� ������
	Total_area_of_all_circles = 0;
	Total_area_of_all_ellipses = 0;
	count_circles = 0;
	count_ellipses = 0;
	//--------------------------------------//

	system("pause");
	return 0;
}
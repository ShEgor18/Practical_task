#include <algorithm>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <vector>
#include "Curves.h"
#define sizeVector 10
using namespace std;

Circle* newCircle()
{
	Circle* tmp = new Circle(rand()%100);
	return tmp;
}
Elips* newElips()
{
	Elips* tmp = new Elips(rand() % 100, rand() % 100);
	return tmp;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	float Total_area_of_all_circles = 0;
	float Total_area_of_all_ellipses = 0;
	int count_circles = 0;
	int count_ellipses = 0;
	srand(time(0));

	//�������� ��������� ������ �������
	vector<Curves*> vector = {};
	cout << "������� ������: " << endl;
	for (int i = 0; i < sizeVector; i++)
	{
		Curves* tmp;
		if (rand() % 2 == 0)
			tmp = newCircle();
		else
			tmp = newElips();
		vector.push_back(tmp);
		cout << tmp->Calculate_area() << " ";
	}
	//--------------------------------------//

	//��������� ������ �� ���������� �������
	sort(vector.begin(), vector.end(), [](Curves* c1, Curves* c2) -> bool { return c1->Calculate_area() < c2->Calculate_area(); });
	cout << endl << endl;
	//--------------------------------------//

	//������� ��������������� ������
	cout << "��������� ������ � ������� ����������� ��������: " << endl;
	for (auto const& element : vector)
	{
		cout << element->Calculate_area() << " ";
	}
	cout << endl << endl;
	//--------------------------------------//

	//������� ��������� �������������� ����� 
	for (auto const& element : vector)
	{
		if (element->Get_type() == 0)
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
	cout << fixed << setprecision(2) << "������ ������� ���� �����������: " << Total_area_of_all_circles << endl;
	cout << "���-�� �����������: " << count_circles << endl;
	cout << fixed << setprecision(2) << "������ ������� ���� �������: " << Total_area_of_all_ellipses << endl;
	cout << "���-�� �������: " << count_ellipses << endl;
	cout << fixed << setprecision(2) << "����� ������� ���� �����: " << Total_area_of_all_ellipses + Total_area_of_all_circles << endl;
	//--------------------------------------//

	//����������� ������
	while (!vector.empty())
	{
		Curves* tmp = vector[vector.size()-1];
		vector.pop_back();
		delete tmp;
	}
	Total_area_of_all_circles = 0;
	Total_area_of_all_ellipses = 0;
	count_circles = 0;
	count_ellipses = 0;
	//--------------------------------------//

	system("pause");
	return 0;
}
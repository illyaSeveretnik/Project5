#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "�������� �2:" << endl;
	int* asd_0_1 = nullptr;
	asd_0_1 = new int;
	cout << "����i�� ���� ����� -> ";
	cin >> *(asd_0_1);
	if (*(asd_0_1) >= 0)
	{
		std::cout << "��� ����� �� ���� -> + " << std::endl;
	}
	else
	{
		std::cout << "��� ����� �� ���� -> - " << std::endl;
	}
	delete asd_0_1;
	asd_0_1 = nullptr;

	cout << "�������� �3:" << endl;
	int* qwerty = new int(2);
	int* qwerty_2_0 = new int(6);
	std::swap(*qwerty, *qwerty_2_0);
	cout << *qwerty << endl;
	cout << *qwerty_2_0 << endl;
	system("pause");

	cout << "�������� �5:" << endl;
	int abc(0);
	int arr[20] = { 2,8,3,4,3 };
	for (int i(0); i < 20; i++)
	{
		abc += *(arr + i);
	}
	cout << abc << endl;
	system("pause");










}
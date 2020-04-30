//Лабораторная работа 2
//Массивы

#include <iostream>
using namespace std;
int main()
{
	int array1[3][3] = {
	{ 1,2,3 },
	{ 4,5,6 },
	{ 7,8,9 }
	};
	int array2[3][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int array3[3][3] = { {0} };
	int array4[3][3] = { {0} };
	int vector1[3] = { 1,2,3 };
	int vector2[3] = { 1,2,3 };
	int vector3[3] = { 0 };
	int vector4[3] = { 0 };

	cout << "Poelementnoe umnozhennie matric:" << '\n';

	for (int i = 0; i < 3; i++) // Задание 1
	{
		for (int j = 0; j < 3; j++)
		{
			array3[i][j] += array1[i][j] * array2[i][j];
		}
	}

	for (int i = 0; i < 3; i++) // Вывод результата задания 1
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array3[i][j] << '\t';
		}
		cout << '\n';
	}

	cout << "Umnozhennie matric:" << '\n';

	for (int i = 0; i < 3; i++) // Задание 2
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				array4[i][j] += array1[i][k] * array2[k][j];
			}
		}
	};

	for (int i = 0; i < 3; i++) // Вывод результата задания 2
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array4[i][j] << '\t';
		}
		cout << '\n';
	}

	cout << "Umnozhennie matrici na vektor:" << '\n';

	for (int i = 0; i < 3; i++) // Задание 3
	{
		for (int j = 0; j < 3; j++)
		{
			vector4[i] += array1[i][j] * vector1[j];
		}
	};

	for (int i = 0; i < 3; i++) // Вывод результата задания 3
	{
		cout << vector4[i] << '\n';
	}

	cout << "Proizvedenie vektorov:" << '\n';

	for (int i = 0; i < 3; i++) { // Задание 4
		vector3[i] += vector1[i] * vector2[i];
	}

	for (int i = 0; i < 3; i++) // Вывод результата задания 4
	{
		cout << vector3[i] << '\n';
	}

	getchar();
	return 0;
}
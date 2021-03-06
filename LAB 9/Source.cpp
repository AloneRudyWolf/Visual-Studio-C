// lab_8_dyn.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

void print_1d(int **vector, int m) // ����� �� ����� ����������� ������� 
{
	for (int j = 0; j < m; ++j)
	{
		std::cout << vector[0][j] << " ";
	}
	std::cout << std::endl;

}


void print_2d(int **matrix, int n, int m) // ����� �� ����� ���������� ������� 
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}



void matrix_mult(int **matrix_result, int **matrix1, int **matrix2, int t1, int p1, int t2, int p2) //������������ ������ 
{

	for (int i = 0; i < t1; i++)
	{
		for (int j = 0; j < p2; j++)
		{
			int s = 0;
			for (int z = 0; z < p1; z++)
			{
				s = s + matrix1[i][z] * matrix2[z][j]; // ������� ��������� ���� ������ 
			}
			matrix_result[i][j] = s;
		}
	}
}


void delete_matrix(int **matrix, int n) // �������� �������  
{
	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}


int **alloc_matrix(int n, int m) // �������� ������� ��� ������ ������������� ������� 
{
	int **matrix_result = new int*[n];
	for (int i = 0; i < n; i++)
	{
		matrix_result[i] = new int[m];
	}
	return matrix_result;
}



void matrix_matrix(int **result, int **matrix1, int **matrix2, int n1, int m1, int n2, int m2) // ������� ��� �������� ����� ������ 
{

	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < m1; j++)
		{
			result[i][j] = matrix1[i][j] + matrix2[i][j]; // ������� �������� ������
		}

	}
}


void summs_vector(int **result, int **vector1, int **vector2, int k1, int k2) // ������� ��� �������� ����� �������� 
{

	for (int j = 0; j < k1; j++)
	{
		result[0][j] = 0;
		result[0][j] = vector1[0][j] + vector2[0][j];  // ������� �������� �������� 
	}
}

void matrix_x_vector(int **result, int **matrix, int **vector, int t1, int p1, int t2) // ������� ��� ��������� ������� �� ������ 
{

	for (int j = 0; j < p1; j++)
	{
		result[0][j] = 0;
	}

	for (int i = 0; i < t1; i++)
	{
		for (int j = 0; j < p1; j++)
		{
			result[0][i] = result[0][i] + matrix[i][j] * vector[0][j]; // ������� ��������� ������� �� ������ 
		}
	}
}

void scalar_vector(int &scalar_mult, int **vector1, int **vector2, int p1, int p2) // ������� ��� ���������� ��������� �������� 
{
	for (int j = 0; j < p1; j++)
	{
		scalar_mult = scalar_mult + vector1[0][j] * vector2[0][j]; // ������� ���������� ��������� �������� 
	}
}

void vector_x_vector(int **result, int **vector1, int **vector2, int p1, int p2) // ������� ��� ���������� ��������� �������� 
{

	for (int i = 0; i < p1; i++) {		// ��������� ��������� �������� 
		if (i == 0) {
			for (int j = 0; j < p2; j++) {
				result[i][j] = 1;
			}

		}
		else {
			if (i == 1) {
				for (int j = 0; j < p1; j++) {
					result[i][j] = vector1[0][j];
				}
			}
			else {
				for (int j = 0; j < p2; j++) {
					result[i][j] = vector2[0][j];
				}
			}
		}
	}

	for (int i = 0; i < p2; i++) {
		result[0][i] = 0;
	}

}


void matrix_summ() // �������, �������������� ����� ���� ������ 
{
	int n1, m1, n2, m2;
	std::cin >> n1 >> m1 >> n2 >> m2; // ���� ������������� ������������ ���� ������ 

	int **matrix1 = alloc_matrix(n1, m1); // �������� ������ ������� 
	int **matrix2 = alloc_matrix(n2, m2); // �������� ������ ������� 
	int **result = alloc_matrix(n1, m2); // �������� �������������� ������� 

	for (int i = 0; i < n1; ++i)
	{
		for (int j = 0; j < m1; ++j)
		{
			matrix1[i][j] = rand(); // ������� 1 ���������� ���������� ������� 
		}
	}

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < m2; j++)
		{
			matrix2[i][j] = rand();  // ������� 2 ���������� ���������� ������� 
		}
	}

	std::cout << "Matrix 1: " << std::endl;
	print_2d(matrix1, n1, m1); // ����� �� ����� ������ ������� 
	std::cout << "Matrix 2: " << std::endl;
	print_2d(matrix2, n2, m2); // ����� �� ����� ������ ������� 

	matrix_matrix(result, matrix1, matrix2, n1, m1, n2, m2); // ����� ������� ��� �������� ����� ���� ������ 
	std::cout << "-------------------------" << std::endl
		<< "Result: " << std::endl;

	if (m1 != m2, n1 != n2) // �������� ����������� �������� ������ 
	{
		std::cout << "Cannot summ matrixes" << std::endl; // ����� ��������� ��� ������������� �������� 
		return;
	}
	else
	{
		print_2d(result, n1, m2); // ����� �� ����� �������������� ������� 
	}

	delete_matrix(matrix1, n1);
	delete_matrix(matrix2, m2); // �������� ������������ �������� �� ��������� �� �������������
	delete_matrix(result, n1);

}

void vector_summ() // ������� ��� �������� ��������  
{
	int k1, k2;
	std::cin >> k1 >> k2; // ���� ������������� ������������ ���� ��������  

	int **vector1 = alloc_matrix(1, k1); // �������� ������� ������� 
	int **vector2 = alloc_matrix(1, k2); // �������� ������� ������� 
	int **result = alloc_matrix(1, k2); // �������� ��������������� ������� 

	for (int j = 0; j < k1; j++)
	{
		vector1[0][j] = rand(); // ������ 1 ���������� ���������� ������� 
	}

	for (int j = 0; j < k2; j++)
	{
		vector2[0][j] = rand(); // ������ 2 ���������� ���������� ������� 

	}

	std::cout << "Vector 1: " << std::endl;
	print_1d(vector1, k1); // ����� �� ����� ������� 1 
	std::cout << "Vector 2: " << std::endl;
	print_1d(vector2, k2); // ����� �� ����� ������� 2 

	summs_vector(result, vector1, vector2, k1, k2); // ����� ������� ��� �������� ����� ���� ������ 
	std::cout << "-------------------------" << std::endl
		<< "Result: " << std::endl;

	if (k1 != k2) // �������� ����������� �������� �������� 
	{
		std::cout << "Cannot summ vectors" << std::endl; // ����� ��������� ��� ������������� �������� 
		return;
	}
	else
	{
		print_2d(result, 1, k2); // ����� �������������� ������� 
	}

	delete_matrix(vector1, 1);
	delete_matrix(vector2, 1); // �������� ������������ �������� �� ��������� �� ������������� 
	delete_matrix(result, 1);
}

void calc_matrix() // �������, �������������� ������������ ���� ������ 
{
	int t1, p1, t2, p2;
	std::cin >> t1 >> p1 >> t2 >> p2; // ���� ������������� ������������ ���� ������ 

	int **matrix1 = alloc_matrix(t1, p1); // �������� ������ ������� 
	int **matrix2 = alloc_matrix(t2, p2); // �������� ������ ������� 
	int **result = alloc_matrix(t2, p1); // �������� �������������� ������� 

	for (int i = 0; i < t1; i++)
	{
		for (int j = 0; j < p1; j++)
		{
			matrix1[i][j] = rand(); // ������� 1 ���������� ���������� ������� 
		}
	}

	for (int i = 0; i < t2; ++i)
	{
		for (int j = 0; j < p2; ++j)
		{
			matrix2[i][j] = rand();  // ������� 2 ���������� ���������� ������� 
		}
	}

	std::cout << "Matrix 1: " << std::endl;
	print_2d(matrix1, t1, p1); // ����� �� ����� ������ ������� 
	std::cout << "Matrix 2: " << std::endl;
	print_2d(matrix2, t2, p2); // ����� �� ����� ������ ������� 

	matrix_mult(result, matrix1, matrix2, t1, p1, t2, p2); // ����� ������� ��� �������� ����������� ���� ������ 
	std::cout << "-------------------------" << std::endl
		<< "Result: " << std::endl;

	if (p1 != t2) //  �������� ����������� ��������� 
	{
		std::cout << "Cannot multiply matrixes" << std::endl; // ����� ��������� � ������ ������������� ������������ ������ 
		return;
	}
	else
	{
		print_2d(result, t1, p2); // ����� �� ����� �������������� ������� 
	}

	delete_matrix(matrix1, t1);
	delete_matrix(matrix2, p2); // �������� ������������ �������� �� ��������� �� �������������
	delete_matrix(result, t1);
}

void matrix_mult_vector() // �������, �������������� ������������ ������ �� ������ 
{
	int t1, p1, p2;
	std::cin >> t1 >> p1 >> p2; // ���� ������������� ������������ ������� � �������  

	int **matrix = alloc_matrix(t1, p1); // �������� ������� 
	int **vector = alloc_matrix(1, p2); // �������� �������  
	int **result = alloc_matrix(1, p2); // �������� ��������������� ������� 

	for (int i = 0; i < t1; i++)
	{
		for (int j = 0; j < p1; j++)
		{
			matrix[i][j] = rand(); // ������� ���������� ���������� ������� 
		}
	}


	for (int j = 0; j < p2; ++j)
	{
		vector[0][j] = rand();  // ������ ���������� ���������� ������� 
	}


	std::cout << "Matrix: " << std::endl;
	print_2d(matrix, t1, p1); // ����� �� ����� ������� 
	std::cout << "Vector: " << std::endl;
	print_1d(vector, p2); // ����� �� ����� �������  

	matrix_x_vector(result, matrix, vector, t1, p1, p2); // ����� ������� ��� �������� ����������� ���� ������ 
	std::cout << "-------------------------" << std::endl
		<< "Result: " << std::endl;

	if (t1 != p2) //  �������� ����������� ��������� 
	{
		std::cout << "Cannot multiply matrixes" << std::endl; // ����� ��������� � ������ ������������� ������������ ������� � �������  
		return;
	}
	else
	{
		print_1d(result, p1); // ����� �� ����� �������������� ������� 
	}

	delete_matrix(matrix, t1);
	delete_matrix(vector, 1); // �������� ������������ �������� �� ��������� �� �������������
	delete_matrix(result, 1);
}

void scalar_mult_vector() // �������, �������������� ��������� ������������ ���� ��������  
{
	int p1, p2;
	std::cin >> p1 >> p2; // ���� ������������� ������������ ���� �������� 

	int **vector1 = alloc_matrix(1, p1); // �������� ������� �������  
	int **vector2 = alloc_matrix(1, p2); // �������� ������� ������� 



	for (int j = 0; j < p1; j++)
	{
		vector1[0][j] = rand(); // ������ 1 ���������� ���������� ������� 
	}


	for (int j = 0; j < p2; j++)
	{
		vector2[0][j] = rand();  // ������ 2 ���������� ���������� ������� 
	}


	std::cout << "Vector 1: " << std::endl;
	print_1d(vector1, p1); // ����� �� ����� ������� �������  
	std::cout << "Vector 2: " << std::endl;
	print_1d(vector2, p2); // ����� �� ����� ������� �������   

	int scalar_mult = 0; // �������� ����������, � ������� ����� ������� ��������� ���������� ������������ 
	scalar_vector(scalar_mult, vector1, vector2, p1, p2);
	std::cout << "-------------------------" << std::endl
		<< "Result: " << std::endl;

	if (p1 != p2) //  �������� ����������� ��������� 
	{
		std::cout << "Cannot multiply vectors" << std::endl; // ����� ��������� � ������ ������������� ������������ ������� � �������  
		return;
	}
	else
	{
		std::cout << scalar_mult << std::endl;  // ����� �� ����� ���������� ���������� ������������  
	}

	delete_matrix(vector1, 1);
	delete_matrix(vector2, 1); // �������� ������������ �������� �� ��������� �� �������������

}

void vector_mult_vector() // �������, �������������� ��������� ������������ ���� ��������  
{
	int p1, p2;
	std::cin >> p1 >> p2; // ���� ������������� ������������ ���� �������� 

	int **vector1 = alloc_matrix(1, p1); // �������� ������� �������  
	int **vector2 = alloc_matrix(1, p2); // �������� ������� ������� 
	int **result = alloc_matrix(p1, p2); // �������� ����������, � ������� ����� ������� ��������� ���������� ������������  


	for (int j = 0; j < p1; j++)
	{
		vector1[0][j] = rand(); // ������ 1 ���������� ���������� ������� 
	}


	for (int j = 0; j < p2; ++j)
	{
		vector2[0][j] = rand();  // ������ 2 ���������� ���������� ������� 
	}


	std::cout << "Vector 1: " << std::endl;
	print_1d(vector1, p1); // ����� �� ����� ������� �������  
	std::cout << "Vector 2: " << std::endl;
	print_1d(vector2, p2); // ����� �� ����� ������� �������   


	vector_x_vector(result, vector1, vector2, p1, p2);
	std::cout << "-------------------------" << std::endl
		<< "Result: " << std::endl;

	if (p1 != p2) //  �������� ����������� ��������� 
	{
		std::cout << "Cannot multiply vectors" << std::endl; // ����� ��������� � ������ ������������� ������������ ������� � �������  
		return;
	}
	else
	{
		print_1d(result, p1);  // ����� �� ����� ���������� ���������� ������������  
	}

	delete_matrix(vector1, 1);
	delete_matrix(vector2, 1); // �������� ������������ �������� �� ��������� �� �������������
	delete_matrix(result, p1);

	return;
}




int main()
{

	matrix_summ(); // ����� ������� ��� �������� ����� ���� ������ (������� � 1) 

	vector_summ(); // ����� ������� ��� �������� ����� �������� (������� � 2) 

	calc_matrix(); // ����� ������� ��� �������� ������������ ���� ������ (������� � 3) 

	matrix_mult_vector(); // ����� ������� ��� �������� ������������ ������� �� ������ (������� � 4) 

	scalar_mult_vector(); // ����� ������� ��� �������� ���������� ������������ �������� (������� � 5) 

	vector_mult_vector(); // ����� ������� ��� �������� ���������� ������������ �������� (������� � 6) 

	getchar();

	return 0;
}

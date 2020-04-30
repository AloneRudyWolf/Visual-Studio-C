//  УКАЗАТЕЛИ
//Лаболаторная работа №3
//указатель-переменная,хранящая ардрес каких либо данных в оперативной памяти
//указатель-переменная ,хранящая адрес,пермещение другой перменной в оперативной памяти

#include "pch.h" // в "" в первую очередь искать рядом с проектом
#include <iostream>; //угловые скобки <> -поиск файла в спискесистемных каталогов среды
#include <locale.h>;
using namespace std;

int main() // обязательная точка входа в программу
{


	setlocale(LC_ALL, "Russian");
	/*
	//1))
		//синтаксис обьявления указателей (тип данных*имя_указателя)


	int a;
	double b;
	int*prt_int;
	prt_int = &a; // унарный оператор амперсенд & -моператор получения адреса
	double*prt_dbl;
	prt_dbl = &b;
	//указатели нужны для передачи в какую либу фунцию огромный массив данных(текстуру,биг дата массив)
	//Не копируете,а просто указываете на адрес переменной.
	//
// 2)) РАМЗЕР УКАЗАТЕЛЯ
	cout << "int pointer size = " << sizeof(prt_int);
	cout << "\n";
	cout << "double pointer size = " << sizeof(prt_dbl);
	cout << "\n";
	cout << "char pointer size = " << sizeof(char*);
	cout << "\n";
	cout << " long long pointer size = " << sizeof(long long*);
	cout << "\n";
	cout << "bool pointer size = " << sizeof(bool*);
	cout << "\n";


	// 3) СОДЕРЖИМОЕ УКАЗАТЕЛЯ
	cout << " prt_int  = " << prt_int;
	cout << "\n";
	cout << " prt_dbl  = " << prt_dbl;

	//оператор разыменования указателей:чтобы получить значение,
	// хранящиеся по данному указателю
	//нужно еще раз применить оператор *
	a = *prt_int; // получить обратно значение a
	int c = 0;
	b = a;
	b = *prt_int;
	cout << "*prt_int = " << *prt_int;
	cout << '\n';
	cout << "*prt_dbl = " << *prt_dbl;
	// в случае сборки на х64 размер указателей будет 8 байт
	//

	int m1;
	//4) ПЕЧАТЬ ОБЛАСТИ ПАМЯТИ

	int arr2D[2][2] = { {1,2},{3,4} };
	int arr1D[2] = { 4,5 };
	//5) УКАЗАТЕЛИ И МАССИВЫ
	//5.1) простоимя массива без скобок имееет тип указателя
	//имя двухмерного массива имеет тип указаеля на указатель
	//В записи double arr1D[n] arr1D имееет тип (double*)
	//5.2)В записи double arr2D[m][n] arr2D имееет тип (double**)
	// Обращаясь к  arr2D[m] можно получить указатель на одномернй массив-строку
	//оператор [] фактически прибавляет индекс к указателю массива
	//arr1D[i] то же самое,что и *(arr1D + i)


	//cout << "arr1D[2]= *(arr1D+2) = " << *(arr1D + 2);
	//cout << "arr2D[2][2]= *(*(arr2D+2)+2) = " << *(*(arr2D + 2) + 2);
	*/
	//ЗАДАНИЕ 1
//Вывести на экран таблицу: 	тип данных - размер соответствующего указателя. 
	//Для типов int, double, char, long, bool.
	int a;
	double b;
	char c;
	long long d;
	bool f;
	int *ptr_int = &a;
	double *ptr_double = &b;
	char *ptr_char = &c;
	long long *ptr_long = &d;
	bool *ptr_bool = &f;
	cout << "int pointer size    = " << sizeof(*ptr_int) << endl;
	cout << "double pointer size = " << sizeof(*ptr_double) << endl;
	cout << "char pointer size   = " << sizeof(*ptr_char) << endl;
	cout << "long pointer size   = " << sizeof(*ptr_long) << endl;
	cout << "bool pointer size   = " << sizeof(*ptr_bool) << endl;
	cout << "\n";
	cout << "\n";
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
												//ЗАДАНИЕ 2
						//Реализовать шифр Цезаря для массива, заданного в тексте программы.

	char str[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int sum = 3;
	int t = 0;
	cout << "Введите 10 символов ";
	cout << '\n';
	for (int i = 0; i < 10; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < 10; i++) {
		t = str[i] + sum;
		str[i] = char(t);
	}
	cout << '\n';
	cout << "Шифрованные символы co смещение на 3 символа вправо - ";
	for (int i = 0; i < 10; i++) {
		cout << str[i];
	}
	cout << '\n';
	cout << '\n';
	cout << '\n';

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

								//ЗАДАНИЕ 3
				//Реализовать сортировку пузырьком массива, заданного в тексте программы.
	cout << "Сортировка пузырьком";
	int kek[10]{ 8, 4, 6, 5, 7, 0, 2, 3, 1, 9 };
	int tem; //временная переменная для обмена элементов местами 
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (kek[j] > kek[j + 1]) {
				tem = kek[j];
				kek[j] = kek[j + 1];
				kek[j + 1] = tem;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		std::cout << kek[i] << "\t";
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	

												// ЗАДАНИЕ 4
						//Реализовать Шейкерную сортировку массива, заданного в тексте программы.
	cout << "\n";
	cout << "\n";
	cout << "\nШейкерная cортировка\n";
	cout << "Введите кол-во чисел \n";
	int temp;
	int size;
	int *arr;
	cin >> size;
	if (size > 0)
	{

		arr = new int[size]; // выделение памяти под массив 

		// заполнение массива 
		for (int i = 0; i < size; i++)
		{
			cout << "[" << i + 1 << "] = ";
			cin >> arr[i];
		}
		cin.ignore();

		// Сортировка массива 



		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					// меняем элементы местами 
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
				if (arr[size - 1 - j] < arr[size - 2 - j])
				{
					temp = arr[size - 1 - j];
					arr[size - 1 - j] = arr[size - 2 - j];
					arr[size - 2 - j] = temp;
				}
			}
		}



	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		arr[i] = 0;
	}

	getchar();
	return(0);
}
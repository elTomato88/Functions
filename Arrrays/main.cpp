#include "stdafx.h"
#include "constants.h"
#include "FillRand.h" //Не надо подключать cpp файл
#include "Print.h"
#include "Statistics.h"
#include "Sort.h"
#include "Shifts.h"
int CheckUnique(int arr[], const int n, int check_uniq)
{
	for (int i = 0; i < n; i++)
	{
		if (check_uniq == arr[i])return 0;
	}
	return 1;
}

void UniqueRand(int arr[], const int n)
{
	
	for (int i = 0; i < n; i++)
	{
		int result=0;
		int check_uniq = 0;
		do
		{
			check_uniq = rand()%100;
			result = CheckUnique(arr, n, check_uniq);
			arr[i] = check_uniq;
		} while (!result);
		
	}
};

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int result = 0;
			int check_uniq = 0;
			do
			{
				check_uniq = rand()%100;
				result = CheckUnique(arr[0], ROWS*COLS, check_uniq);
				arr[i][j] = check_uniq;
			} while (!result);
			
		}
	}
};






void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	UniqueRand(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << endl;
	/*
	FillRand(arr, n);	//Заполнение массива случайными числами:
	Print(arr, n);		//Вывод исходного массива на экран:
	Sort(arr, n);		//Сортировка массива:
	Print(arr, n);		//Вывод отсортированного массива на экран:
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(arr, n) << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << MinValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << MaxValueIn(brr, SIZE) << endl;

	Print(brr, SIZE);
	int shifts=1;
	//cout << "Введите количество сдвигов: "; cin >> shifts;
	ShiftLeft(brr, SIZE, shifts);
	Print(arr, n);
	ShiftRight(arr, n, shifts);
	Print(arr, n);
	cout << delimiter << endl;

	//		Объявление двумерного массива:
	*/
	int i_arr_2[ROWS][COLS] =
	{
		
	};
	UniqueRand(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	/*
	double i_brr_2[ROWS][COLS] =
	{
		{3.5,5.1,8.3},
		{13,21,34},
		{55,89,144},
	};
	

	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Сумма двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Enter the count of shifts: ";cin >> shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, shifts);
	Print(i_arr_2, ROWS, COLS);
	*/
}






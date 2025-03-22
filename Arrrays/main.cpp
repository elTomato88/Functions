#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);// выводит массив на экран
void Sort(int arr[], const int n); // сортирует массив

int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	//заполнение массива случ. числами
	FillRand(arr, n);

	//вывод исходного массива на экран
	Print(arr, n);
	//сортировка
	Sort(arr, n);
	//вывод отсортированного массива
	Print(arr, n);
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	
}

void FillRand(int arr[], const int n)
{
	//заполнение массива случ. числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
	}
}

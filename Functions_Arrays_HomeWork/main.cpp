#include<iostream>
using namespace std;

double Array_Math_Operator(int arr[], const int ARR_LENGTH, string switcher="sum")
{
	if (switcher == "sum")
	{
		double sum = 0;
		for (int i = 0; i < ARR_LENGTH; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	if (switcher == "avg")
	{
		double sum = 0;
		for (int i = 0; i < ARR_LENGTH; i++)
		{
			sum += arr[i];
		}
		return sum/ARR_LENGTH;
	}
	if (switcher == "min")
	{
		double min = arr[0];
		for (int i = 0; i < ARR_LENGTH; i++)
		{
			if (arr[i] < min) { min = arr[i]; }
		}
		return (double)min;
	}
	if (switcher == "max")
	{
		double max = arr[0];
		for (int i = 0; i < ARR_LENGTH; i++)
		{
			if (arr[i] > max) { max = arr[i]; }
		}
		return (double)max;
	}
	return 0;
}

void Array_Shifter(int arr[], const int ARR_LENGTH, int shift_number, int switcher = 0)
{
	int shift;
	
	if (switcher) 
	{
		for (int i = 0, j; i < shift_number; i++)
		{
			shift = arr[0];

			for (j = 0; j < ARR_LENGTH - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[j] = shift;
		}
		
	}
	else
	{
		for (int i = 0, j; i < shift_number; i++)
		{
			shift = arr[ARR_LENGTH - 1];

			for (j = ARR_LENGTH - 1; j >0 ; j--)
			{
				arr[j] = arr[j-1];
			}
			arr[j] = shift;
		}

	}


	for (int i = 0; i < ARR_LENGTH; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL, "");
	const int N = 5;
	int arr[N] = {4,1,2,3,3};
	cout << Array_Math_Operator(arr, N, "sum") << endl;
	cout << Array_Math_Operator(arr, N, "avg") << endl;
	cout << Array_Math_Operator(arr, N, "min") << endl;
	cout << Array_Math_Operator(arr, N, "max") << endl;
	Array_Shifter(arr, N, 1);

	for (int j = 0; j < N; j++) // Не забыть спросить. Похоже, мы проводим операции над изначальным массивом, а не его локальной копией. ОПАСНО!!! (originalArray[])=>{const clonedArray = [...originalArray];} поискать аналог. 
	{							//Почему? Массив локальный -> переменные суть ссылки на память. Передали список ссылок? Нужны копии значений. -->Оператор расширения???<--
		cout << arr[j];  
	}
	cout << endl;

	Array_Shifter(arr, N, 1, 1);
	return 0;
}
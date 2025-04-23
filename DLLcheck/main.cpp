#include<iostream>
#include "..\Arrrays\Print.h"
#include "..\Arrrays\Sort.h"


int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {5,6,1,4,5};
	Sort(arr, n);
	Print(arr, n);
	
	return 0;
}
#include <iostream>
#include "..\Arrrays\Print.h"
#include "..\Arrrays\Sort.h"
#include "..\Arrrays\FillRand.h"
/*Static LIB*/
int main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	FillRand(arr, 10);
	Sort(arr, n);
	Print(arr, n);
	cout << endl;

    return 0;
}
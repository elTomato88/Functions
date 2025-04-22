#include <iostream>
#include "..\Arrays\TemplatesPrint.h"



int main()

{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = {1,2,3,4,5}
	Print(arr, n);
	return 0;
}
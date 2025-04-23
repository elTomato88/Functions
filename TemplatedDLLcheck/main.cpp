#include<iostream>
#include"TemplatesPrint.h"
#include "TemplatesSort.h"
int main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n] = { 3,8,7,1,3 };
	Sort(arr, n);
	Print(arr, n);
	return 0;
}
#include<iostream>
using namespace std;
#define delimiter "\n............................\n"
int Sum(int a, int b, int d=0)
{
	int c = a + b;
	return c;
}
int Difference(int a, int b)
{
	
	return a - b;
}
int Prodact(int a, int b) //prodact
{
	return a * b;
}
double  Quotient(int a, int b)
{
	
	return (double)a / b;
}




int main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions" << endl;
	int a = 2;
	int b = 3;
	int c = Sum(a, b);
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Difference(a, b) << endl;
	cout << a << "*" << b << "=" << Prodact(a, b) << endl;
	cout << a << "/" << b << "=" << Quotient(a, b) << endl;
	cout << delimiter << endl;
	const int ROWS = 3;
	const int COLS = 5;
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << i_arr_2[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
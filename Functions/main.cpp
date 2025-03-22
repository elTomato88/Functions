#include<iostream>
using namespace std;

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
	
	return 0;
}
#include <iostream>
using namespace std;
int add (int a, int b);
int subtract (int a, int b);
int main ()
{
	int (*pointer) (int, int);
	
	pointer= &add;
	cout << "sum=" << pointer (5,9) << endl;
	pointer= &subtract;
	cout << "difference=" << pointer (9,5)<< endl;
}
int add (int a, int b)
{
	return a+b;
}
int subtract (int a, int b)
{
	return a-b;
}

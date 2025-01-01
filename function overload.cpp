#include <iostream>
using namespace std;
int add (int x, int y);
double add (double x, double y);
int main ()
{
	int num1, num2;
	num1=add (5,6);
	num2=add (3.4, 5.6);
	cout << "sum of two integers=" << num1 << endl;
	cout << "sum of two double values=" << num2 << endl;
}
int add (int x, int y)
{
	return x+y;
}
double add (double x, double y)
{
	return x+y;
}

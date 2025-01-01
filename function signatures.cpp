#include <iostream>
using namespace std;
void udf (int a); // function overload 1 takes integer
void udf (double a); // function overload 2 takes float

int main ()
{
	udf (3);
	udf (5.67);
}

void udf (int x)
{
	cout << "The integer value is=" << x << endl;
}

void udf (double x)
{
	cout << "The float value is=" << x << endl;
}

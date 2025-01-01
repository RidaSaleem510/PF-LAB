#include <iostream>
using namespace std;
void udf (int x, double y);
int main ()
{
	udf (4, 5.76);
	udf (5, 9.98);
}
void udf (int a, double b)
{
	cout<< "The first integer value is=" << a << endl;
	cout << "The second double value is=" << b << endl;
}


#include <iostream>
using namespace std;
int udf1 ();
double udf2();
void udf3 ();
int main ()
{
	int val1=udf1 ();
	cout << "integer value=" << val1 << endl;
	double val2=udf2 ();
	cout << "double value="<< val2 << endl;
	udf3 ();
}
int udf1 ()
{
	return (4);
}
double udf2()
{
	return (5.67);
}
void udf3 ()
{
	cout << "Hello World!";
}

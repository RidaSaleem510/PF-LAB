#include <iostream>
using namespace std;
void udf (int x);
int main ()
{
	int num =5;
	cout << "before calling function value of num=" << num << endl;
	
	udf (num);
	
	cout << "after calling function value of num=" << num << endl;
}
void udf (int x)
{
	cout << "value of x before modification=" << x << endl;
	x+=2;
	cout << "value of x after modification=" << x << endl;
}
/*When you use pass by value, the function receive a copy of the 
original variabl so it doesnot changes the original value */

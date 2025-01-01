#include <iostream>
using namespace std;
void udf (int &x);
int main ()
{
	int num=5;
	cout << "value of num before function is called=" << num<< endl;
	udf (num);
	cout << "value of num after function is called=" << num<< endl;
}
void udf (int &x)
{
	cout << "value of x before modification=" << x << endl;
	x+=2;
	cout << "value of x after modification=" << x << endl;
}

/*When you use pass by reference, the function does not receive a copy of the 
original variable. Instead,the function operates directly on the original
 memory location of the variable so it modifies the original value too */

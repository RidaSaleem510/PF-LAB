#include <iostream>
using namespace std;
int factorial (int x);
int main ()
{
	int num =5;
	cout << "factorial of" << num << "=" << factorial (num)<< endl;
}
int factorial (int x)
{
	if ((x==0)|| (x==1))
	{
		return 1;
	}
	else 
	{
		return x*factorial (x-1); // calls itslef 
	}
}

#include <iostream>
using namespace std;
void sum (int x, int y);// function1 prototype or declaration
void product (int a, int b);// function 2 prototype or declaration
int main ()
{
	int val1, val2;
	cout << "enter first value=";
	cin >> val1;
	cout << "enter second value=";
	cin >> val2;
	sum (val1, val2);// function1 call
	product(val1, val2);// function2 call
}

void sum (int val1, int val2)// function1 definition
{
	int sum= val1+ val2;
	cout << "sum=" << sum << endl;
}
void product (int val1, int val2)// function2 definition
{
	int product= val1*val2;
	cout << "product=" << product << endl;
}

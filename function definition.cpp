#include <iostream>
using namespace std;
void sum (int x, int y);// function prototype or declaration
int main ()
{
	int val1, val2;
	cout << "enter first value=";
	cin >> val1;
	cout << "enter second value=";
	cin >> val2;
	sum (val1, val2);// function call	
}

void sum (int val1, int val2)// function definition
{
	int sum= val1+ val2;
	cout << "sum=" << sum << endl;
}


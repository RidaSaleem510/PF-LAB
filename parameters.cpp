#include <iostream>
using namespace std;
void product (int a, int b);// parameters
int main ()
{
	int v1, v2; 
	cout << "enter first value=";
	cin >> v1;
	cout << "enter second value=";
	cin >> v2;
	product(v1, v2);// arguments
}

void product (int val1, int val2)// parameters
{
	int product= val1*val2;
	cout << "product=" << product << endl;
}

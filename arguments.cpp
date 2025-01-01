#include <iostream>
using namespace std;
void product (int a, int b); // parameters
int main ()
{
	product (3,5); //arguments are 3 and 5
	product (8,2); // arguments are 8 and 2
	product (10,5);// arguments are 10 and 5
}
void product (int x, int y)// parameters
{
	int product= x*y;
	cout << "product of" << x << "and" << y << "=" << product << endl;
}

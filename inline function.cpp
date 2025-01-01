#include <iostream>
using namespace std;
inline int square (int x);/*When the function is called, instead of jumping to a
 separate location in memory to execute the function's code, the compiler directly
  replaces the function call with the function's body.*/
int main ()
{
	int num=5;
	cout << "square of"<< num << "=" << square (num) << endl;
}
int square (int x)
{
	 return x*x;
}

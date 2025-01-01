#include <iostream>
using namespace std;
void product(int a, int b = 5);

int main()
 {
    product(3);      // The second parameter will use the default value 5
    product(10, 2);  // Call the function with both arguments
   
}
void product(int a, int b) 
{
    int result = a * b;
    cout << "Product of " << a << " and " << b << " is: " << result << endl;
}


#include <iostream>
using namespace std;
template <typename T>
T maximum(T a, T b);
int main() {
    int result1;
    double result2;
    char result3;
    
    result1 = maximum(10, 20);
    cout << "Maximum of integers: " << result1 << endl;

    // Find the maximum of two doubles
   result2 = maximum(10.5, 20.5);
    cout << "Maximum of doubles: " << result2 << endl;

    // Find the maximum of two characters
    result3 = maximum('A', 'B');
    cout << "Maximum of characters: " << result3 << endl;

    return 0;
}
template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;  // Return the larger of the two
}



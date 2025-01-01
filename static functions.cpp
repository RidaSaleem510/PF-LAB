#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static variable to count objects

public:
    Counter() {
        count++;  // Increment count every time an object is created
    }

    // Static function to get the count of objects
    static int getCount() {
        return count;
    }
};

// Initialize the static member variable
int Counter::count = 0;

int main() {
    Counter obj1;  // First object created
    Counter obj2;  // Second object created

    // Print the number of objects created using static function
    cout << "Number of objects created: " << Counter::getCount() << endl;

    return 0;
}


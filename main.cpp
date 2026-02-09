#include <iostream>

using namespace std;

// COMSC-210 | Lab 5 | Ian Kusmiantoro

// Renamed to swapUsingPointers because it was conflicting with the in built std::swap() func
int swapUsingPointers(int* a, int* b);

int main() {
    int* x = new int; // Create a pointer to an int
    *x = 5;

    int* y = new int;
    *y = 10;

    cout << "x = " << *x << " | y = " << *y << endl;

    cout << "Swapping...\n";
    int sum = swapUsingPointers(x, y);
    cout << "x = " << *x << " | y = " << *y << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

// swapUsingPointers() swaps the values contained by 2 pointers, then returns the sum
// arguments: int* a, int* b
// returns int which is the sum
int swapUsingPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    return *a + *b;
}

#include <iostream>

using namespace std;

// COMSC-210 | Lab 5 | Ian Kusmiantoro

// Renamed to swapUsingPointers because it was conflicting with the in built std::swap() func
int swap(int* a, int* b);

int main() {
    // Unchanged as they are not reference variables.
    int x = 5, y = 10;
    cout << "x = " << x << " | y = " << y << endl;

    cout << "Swapping...\n";
    int sum = swap(&x, &y); // Pass in the addresses of x and y
    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

// swapUsingPointers() swaps the values contained by 2 pointers, then returns the sum
// arguments: int* a, int* b
// returns int which is the sum
int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    return *a + *b;
}

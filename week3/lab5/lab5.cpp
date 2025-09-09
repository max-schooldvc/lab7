// COMSC-210 | Lab 5 | Max Kechely
// IDE used: VSCode 


#include <iostream>
using namespace std;

int swap(int &, int &);

int main() {
    int x = 5, y = 10;
    int *xptr = &x;
    int *yptr = &y;
    cout << "x = " << *xptr << "  | y = " << *yptr << endl;

    cout << "Swapping...\n";
    int sum = swap(*xptr, *yptr);
    cout << "x = " << *xptr << " | y = " << *yptr << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

int swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return a + b;
}
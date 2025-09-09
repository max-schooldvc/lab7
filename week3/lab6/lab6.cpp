// COMSC-210 | Lab 5 | Max Kechely
// IDE used: VSCode 

#include <iostream> //forgot to push at beginning
using namespace std;

double* enterArrayData(double*);
void outputArrayData(double*);
int sumArray(double*);

const int SIZE = 5;

int main() {

    double *arrptr = nullptr;
    arrptr = new double[SIZE];
    arrptr = enterArrayData(arrptr);
    outputArrayData(arrptr);
    int *sumptr = new int;
    *sumptr = sumArray(arrptr);

    cout << "Sum = " << *sumptr << endl;

    delete[] arrptr;
    delete sumptr;
    return 0;



}

double* enterArrayData(double* arr) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value " << (i) << ": ";
        cin >> arr[i];
    }
    return arr;
}

void outputArrayData(double* arr) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << (i) << ": " << arr[i] << endl;
    }
}

int sumArray(double* arr) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    return sum;
}

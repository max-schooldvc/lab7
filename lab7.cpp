// COMSC-210 | Lab 5 | Max Kechely
// IDE used: VSCode

#include <iostream> 
#include <string>
using namespace std;



string * reverseArray(string *);
void displayArray(string *);

const int SIZE = 5; //size of array

int main(){

    string *arrptr = nullptr; // init
    arrptr = new string[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter string " << (i) << ": ";
        getline(cin, arrptr[i]);
    }

    cout << "Original array: ";
    displayArray(arrptr);

    arrptr = reverseArray(arrptr); // assign to return of funct

    cout << "Reversed array: ";
    displayArray(arrptr);

    delete[] arrptr; // deletion of mem
    return 0;
}

string * reverseArray(string *arr){
    string *revArr = new string[SIZE];
    for (int i = 0; i < SIZE; i++){
        revArr[SIZE-i-1] = arr[i];
    }

    return revArr;
}

void displayArray(string *arr){
    for (int i = 0; i < SIZE; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
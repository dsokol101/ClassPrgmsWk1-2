#include <iostream>
#include <cstdint>
using namespace std;
/** 
 * Arrays
 * 
 * 
 * next time: 
 * passing an array as a parameter to a function (lab 2)
 * array<> in the STL (standard template library)
 * vector<> in the STL
 */

void printArray(int arr[], int size) {
    for (int i=0; i < size; i++) {
           cout << "i: " << i << " " << arr[i] << endl;
    }
}
int main() {
    const int SIZE=10;

  //  int arr[size]; // size must be a constant expression, this is ILLEGAL in C++
  // array elements are uninitialized unless you initialize them
  // you use curly braces to initialize arrays 
  // if you initialize some elts, any uninitialized elements are set to 0
    int arr[SIZE]{100}; // this is LEGAL
    cout << "Here are the values in my array arr: " << endl;
    for (int i=0; i < SIZE; i++) {
       cout << "i: " << i << " " << arr[i] << endl;
    }
    // enhanced for loop (also called the for-each loop)
    for (int val: arr) {
        cout << "val: " << val << endl;
    }
    return 0;
}
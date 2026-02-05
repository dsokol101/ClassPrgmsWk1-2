#include <iostream>
#include <cstdint>
using namespace std;
/** 
 * Arrays
 * 
 * plan:
 * files
 * string
 * vector
 */

void printArray(int arr[], int size) {
    for (int i=0; i < size; i++) {
           cout << "i: " << i << " " << arr[i] << endl;
    }
    cout << "In printArray: size of arr is: " << sizeof arr << " bytes" << endl;
}
void incrementArray(int arr[], int size) {
    for (int i=0; i < size; i++) {
           arr[i]++; // increment each element by 1
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
    printArray(arr, SIZE);
    incrementArray(arr, SIZE);
    cout << "After incrementing each element by 1: " << endl;
    // enhanced for loop (also called the for-each loop)
    for (int val: arr) {
        cout << "val: " << val << endl;
    }
    cout << "In main: size of arr is: " << sizeof(arr) << " bytes" << endl;
    return 0;
}
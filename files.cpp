#include <iostream>
#include <fstream>
#include <cstdint>
using namespace std;
/** 
 * Let's see how to:
 * open a file
 * print to a file
 * read from a file
 * 
 * in the future come back and:
 * accept an addition parameter in read and print of type istream
 * or ostream so we can read from any input stream (keyboard or file)
 * needs to be passed by reference
 */
int readData(int arr[], int size);
void printArray(int arr[], int size);
int main() {
    const int SIZE=10;

    // writing to a file in C++
    ofstream outFile("myoutput.txt");
    if (!outFile) {  // or use .is_open()
        cerr << "Error creating file!" << endl;
        return 1;
    }
    int arr[SIZE]{0,1,2,3,4,5,6,7,8,9}; 
    for (int i=0; i < SIZE; i++) {
        outFile << arr[i] << endl;
    }
    outFile.close();
    int numElts = readData(arr, SIZE);
    printArray(arr, numElts);  
    return 0;
}
int readData(int arr[], int size) {
    ifstream inFile("nums.txt");
    if (!inFile) {
        cerr << "Error opening file!" << endl;
        return 1;   
    }
    int i = 0;
    while (i < size && !inFile.eof()) {
        inFile >> arr[i]; 
        i++;
    }
    inFile.close();
    return i;
}
void printArray(int arr[], int size) {
    for (int i=0; i < size; i++) {
           cout << "i: " << i << " " << arr[i] << endl;
    }
}

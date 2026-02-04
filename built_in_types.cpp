#include <iostream>
#include <cstdint>
using namespace std;
/** 
 * C++ has several built-in types (int, double, char, bool, etc)
 * arrays in C++ can be declared with a constant size
 * basic function declaration and definition
 * 
 * In C++ (comes from C) you can treat an integer as a boolean
 * 0 is false, any non-zero value is true
 * 
 * What happens in C++ if you use an uninitialized variable?
 * It results in undefined behavior, which means the program may
 * crash, produce junk values, or appear to work correctly.
 * It is the programmer's responsibility to always initialize your variables before use!
 */

/** 1. brace initialization
 *  2. there are many specific types used in C++
 *  3. you can use auto and allow the compiler to deduce the type
 */
void simple(int); // function declaration or prototype

int main() {
    int a=100, b=900;
    int num;
    cout << "Value of num: " << num << endl;
    // in Java the following would be illegal for 2 reasons:
    // 1. you can't test an integer type in an if statement
    // 2. num is uninitialized
    if (num) {
        cout << "num is true, value is: " << num << endl;
    }
    cout << "Enter an integer: ";
    cin >> num;

    auto num3 = 10;
    double num2{ 5.5 };
    bool isTrue{ true };
    cout << "value of isTrue: " << isTrue << endl;

    char ch{ 'A' };
    int16_t x;
    int64_t y;
    size_t sz;

    //extern int size; // somewhere else I defined an int var size
    // and this is only a declaration
    
    cout << "Value of num is: " << num << " num2: " << num2 << " ch: " << ch << endl;
    cout << "bool prints as an int: " << isTrue << " char ch: "
              << ch <<  endl;
    cout << "# of bytes in a char: " << sizeof(char) << endl;
    simple(5);
    return 0;
}

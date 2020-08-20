/*
 * The following program has comments and `cout` statements with an expression 
 * that has its operator replaced by an underscore. Fill in the operator required 
 * to make the statement print out the value in the comment above it.
 */

#include <iostream>

// Don't worry about these lines. They just make it so you don't have to prefix 
// `cout` and `endl` with `std::` later in your code. Don't use this regularly 
// unless you know what you're doing.
using std::cout;
using std::endl;

int main() {
    // Arithmetic operators
    // 7
    cout << 3 _ 4 << endl;
    // 5.7
    cout << 10 _ 4.3 << endl;
    // 144
    cout << 18 _ 8 << endl;
    // 15 (hint: integer division)
    cout << 124 _ 8 << endl;
    // 6.3 (this might not be perfectly correct. That's fine.)
    // It involves the imprecision of floating-point math.
    cout << 54.81 _ 8.7 << endl;
    // 0
    cout << 12 _ 3 << endl;
    // 5
    cout << 23 _ 8 << endl;

    // Comparison operators
    // true
    cout << 3 _ 3 << endl;
    // false
    cout << "Hello" _ "Hello" << endl;
    // false
    cout << 0.1 _ 0.05 << endl;
    // true 
    cout << 0.2 _ 0.1 << endl;
    // false
    cout << 10 _ 11 << endl;
    // true 
    cout << 5 _ 6 << endl;
    
    // Boolean operators
    // true
    cout << true _ false << endl;
    // false
    cout << (3 < 4) _ ("word" != "word") << endl;
    // false
    cout << false _ true << endl;
    // true 
    cout << (12 == (2 * 6)) _ true << endl;
    // false
    cout << _true << endl;
    // true
    cout << _(4 == 3.5) << endl;
}

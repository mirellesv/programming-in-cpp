/*
    Given the function f(x) = x^2 - 3x + 5.

    Create a program that will have a function that will
    calculate the value of f(a), knowing that a is a number
    that is gonna be decided by the user.
*/

#include <iostream>

using namespace std;

float calculate_fx(float x);

int main(){
    float value;

    cout << "f(x) = x^2 - 3x + 5" << endl;
    cout << "Enter a value for x: ";
    cin >> value;
    cout << "f(" << value << ") = " << value << "^2 - 3*" << value << " + 5 = " << calculate_fx(value);
    return 0;
}

float calculate_fx(float x){
    return x*x - 3*x + 5;
}

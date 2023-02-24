/*
    Create a program that will have a function that will
    calculate the factorial of a number given by the user.
*/

#include <iostream>

using namespace std;

int calculate_factorial(int num);

int main(){
    int n;

    cout << "====== FACTORIAL CALCULATOR ======" << endl;
    cout << "Type the number you want to calculate the factorial of: ";
    cin >> n;
    cout << n << "! = " << calculate_factorial(n);
    return 0;
}

int calculate_factorial(int num){
    int i, fact;

    fact = 1;

    for (i = num; i >= 1; i--){
        fact = fact * i;
    }

    return fact;
}

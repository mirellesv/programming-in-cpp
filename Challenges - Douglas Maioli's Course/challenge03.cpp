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
    while (true){
        cout << "Type the number you want to calculate the factorial of: ";
        cin >> n;
        if(n > 0){
            break;
        }else{
            cout << "The number must be positive!" << endl;
        }
    }
    cout << n << "! = " << calculate_factorial(n) << endl;
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

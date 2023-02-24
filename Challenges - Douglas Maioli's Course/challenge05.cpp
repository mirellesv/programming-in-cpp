/*
    Create a program that will test if someone is eligible
    for government assistance.

    Requirements:
    - They must be older than 21.
    - Their salary must be lower than R$1200,00.
*/

#include <iostream>

using namespace std;

int main(){
    int age;
    float salary;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your salary in BRL: ";
    cin >> salary;

    if(age >= 21 && salary < 1200){
        cout << "You are eligible for government's assistance =) !";
    } else{
        cout << "We're sorry, but you're not eligible for government's assistance =( !";
    }

    return 0;
}

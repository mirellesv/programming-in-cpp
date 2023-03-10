/*
    Create a program that will calculate the power of a number.
    The user must give the basis and the expoent. Besides that,
    the user will be asked if they'd like to calculate the power
    of another number.
*/

#include <iostream>

using namespace std;

int calculate_power(float b, int e);

int main(){
    char ans;
    float basis;
    int expoent;

    do{
        cout << "Calculating Power of A Number ..." << endl;
        cout << "Enter a value for the basis: ";
        cin >> basis;
        cout << "Enter a value for the expoent: ";
        cin >> expoent;
        if(expoent > 0){
            cout << basis << "^" << expoent << " = " << calculate_power(basis, expoent) << endl;
            cout << "Do you want to calculate the power of another number? (Y/N)" << endl;
            cin >> ans;
    } while(ans == 'y' || ans == 'Y');

    return 0;
}

int calculate_power(float b, int e){
    int i, power;

    power = 1;

    for(i = e; i >= 1; i--){
        power *= b;
    }

    return power;
}

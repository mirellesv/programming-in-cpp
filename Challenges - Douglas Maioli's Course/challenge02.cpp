/*
   Create a program that will receive three marks from a
   certain student and also the mean grade of their class.
   The program must calculate the average grade of the
   student and also determine if the obtained grade is
   above, below or the same as the class's.
*/

#include <iostream>

using namespace std;

int main(){
    float mark1, mark2, mark3, mgrade_class, mgrade_ind;

    cout << "Enter your 1st mark: ";
    cin >> mark1;
    cout << "Enter your 2nd mark: ";
    cin >> mark2;
    cout << "Enter your 3rd mark: ";
    cin >> mark3;

    cout << "Now, enter the mean grade of the class: ";
    cin >> mgrade_class;

    mgrade_ind = (mark1 + mark2 + mark3)/3;

    cout << "Mean grade of the glass: " << mgrade_class << endl;
    cout << "Your average grade: " << mgrade_ind << endl;

    if(mgrade_ind > mgrade_class){
        cout << "You're above the average grade of your class =)!";
    } else if(mgrade_ind < mgrade_class){
        cout << "You're below the average grade of your class =(!";
    } else{
        cout << "Your average grade is the same as your class's!";
    }

    return 0;
}

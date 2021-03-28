/****************************
* C++ program to demonstrate*
* basic concepts            *
* Developed by Titus Njiru  *
* On Feb, 2021              *
*****************************/

#include <iostream>

using namespace std;

int main()
{
    //put your code here
    int answer {20};
    int guess {0};
    cout<<"Guess a number: "<<endl;
    cin>>guess;

    if (answer == guess)
        cout<<"Correct "<<endl;
    else
        cout<<"Incorrect "<<endl;

    return 0;
}

/*********************************
* A program for a grading system *
* Written by Titus Njiru         *
* on March, 2021                 *
* Requires c++11                 *
*********************************/

#include <iostream>

using namespace std;

char grading(int m);
string comment (char g);

int main()
{
    cout<<"\t A program to generate a grading system" << endl;

    int mark[] {0,30,40, 55, 62, 70, 73, 105, -10};

    cout << "\tMark\tGrade\tComment\n";

    for (size_t i = 0; i < 9; i++) {
        cout << "\t" << mark[i] << "\t";
        char gr {grading(mark[i])};
        cout << gr << "\t";
        cout << comment(gr) << endl;
    }

    cout << "\nThank you for using me." << endl;

    return 0;
}

// function to grade a mark
// returns an integer
// requires a single argument

char grading(int m) {
    char grade {};

    /* Grading system
    70 - 100 => A
    60 - 79  => B
    50 - 59  => C
    40 - 49  => D
    0 -  39  => F
    */

    if (m > 100 )
        grade = 'E';
    else if (m >= 70 )
        grade = 'A';
    else if ( m >= 60 )
        grade = 'B';
    else if ( m >= 50 )
        grade = 'C';
    else if ( m >= 40 )
        grade = 'D';
    else if ( m >= 0 )
        grade = 'F';
    else
        grade = 'E';

    return grade;
}

// A function to comment on a given grade
// Returns a string
// Requires one argument of type char

string comment (char g) {
    // comment on users grade using switch statement
    string comme;
    switch (g) {
    case 'A':
        comme =  "Excellent";
        break;
    case 'B':
        comme =  "Very Good";
        break;
    case 'C':
        comme =  "Average";
        break;
    case 'D':
        comme =  "You can do better";
        break;
    case 'F':
        comme =  "Failed";
        break;
    default:
        comme =   "Missing mark";

    }

    return comme;

}

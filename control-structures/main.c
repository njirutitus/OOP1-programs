/***************************
* A program to demonstrate *
* control structures       *
* by Titus Njiru           *
* on March 2021            *
***************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mark;
    char grade;

    // ITERATION /LOOPS /REPETTION
    // -while
    // -do...while
    // - for

    // JUMP STATEMENTS
    // -break
    // -continue
    // -goto
    // -return


    int i,j,k,counter;
    counter = 0;

    for ( i=0; i<10; i++) {
        for ( j=0; j<5; j++){
            for ( k=0; k<5; k++){
                printf("%d\n",j);
                counter++;
            }
        }
    }

    // i % 2 == 0

    printf("Loop execute %d times",counter);

    return 0;

    aa:
    for (i=0;i<10;i+=2) {
        printf("Enter mark: ");
        scanf("%d", &mark);

        /*
        70 - 100 - A
        60 - 69  - B
        50 - 59  - C
        40 - 49  - D
        0  - 39  - E
        */

        if ( mark >= 70) {
                grade = 'A';
        }
        else if( mark >= 60 ) {
            grade = 'B';
        }
        else if( mark >= 50 ) {
            grade = 'C';
        }
        else if( mark >= 40 ) {
            grade = 'D';
        }
        else if( mark >= 0 ) {
            grade = 'E';
        }
        else {
            grade = 'F';

        }
        printf("Your grade is %c\n", grade);

        switch(grade){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Very Good");
            break;
        case 'C':
            printf("Average");
        case 'D':
            printf("Pass");
            break;
        case 'E':
            printf("Fail");
            break;
        default:
            printf("Missing Mark");
        }

        printf("\n");
    }



    return 0;
}

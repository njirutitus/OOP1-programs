#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,m,p;
    char name[100];

    int marks[2][2][5];

    int sum = 0;

    for ( n = 0; n < 2 ; n++){
        for ( m = 0; m < 2 ; m++ ){
            for (p = 0; p < 5 ; p++ ){
                printf("Enter mark for student %d in stream %d in campus %d:",p, m, n);
                scanf("%d",&marks[n][m][p]);
                sum += marks[n][m][p];
            }
        }

    }

    double average = (double)sum/20;

    printf("The average of the 20 students is %lf",average);

    return 0;
}

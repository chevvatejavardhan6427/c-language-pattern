/* Write a C program to print a right-angled half pyramid pattern using stars.
The program should take the number of rows as input and display a pyramid that
increases by one star per row.

sample input= 5
sample output=
Enter number of rows:
*
* *
* * *
* * * *
* * * * *

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int r=0;r<5;r++){
        for(int c=0;c<=r;c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

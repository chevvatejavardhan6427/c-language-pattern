/* Write a C program to print a solid square pattern made of stars (*).
The program should accept the number of rows (and columns) from the user and 
display a square with all stars filled.

sample input= 4
sample output=
Enter number of rows:
* * * *
* * * *
* * * *
* * * *


*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int r=0;r<4;r++){
        for(int c=0;c<4;c++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

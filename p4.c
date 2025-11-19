/*
Write a C program to print a reverse right half pyramid pattern using stars (*).
The program should take the number of rows as input and display stars decreasing
from the top to the bottom.

sample input= 5
sample output=
Enter number of rows:
* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int r=n;r>=1;r--){
        for(int c=r;c>=1;c--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

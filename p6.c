/* Write a C program to print a Reverse Left Half Pyramid Pattern using stars .
The pyramid should start with the maximum number of stars on the first row and 
gradually reduce by one in each following row, aligned to the left using spaces.

sample input=5
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
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(i<j)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

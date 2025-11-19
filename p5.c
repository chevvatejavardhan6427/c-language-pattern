/* Write a C program to print a Left Half Pyramid Pattern using stars (*).
The pyramid should be aligned to the left side by adding spaces before each 
row of stars.

sample input=5
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
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int r=1;r<=n;r++){
        for(int c=n;c>=1;c--){
            if(r>=c){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

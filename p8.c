/*Write a C program to print a Palindrome Number Triangle using  for loops.
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4

sample input=4
sample output=Enter number of rows:                                                         
      1                                                                         
    2 1 2                                                                       
  3 2 1 2 3                                                                     
4 3 2 1 2 3 4                                                                   
              



*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        for(int j=2;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

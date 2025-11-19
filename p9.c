/*Write a C program to print a Rhombus Star Pattern using  for loops.

* * * *
 * * * *
  * * * *
   * * * *
    * * * *

sample input=5
             4
sample output=Enter number of rows:                                                         
Enter number of columns:                                                      
* * * *                                                                         
 * * * *                                                                        
  * * * *                                                                       
   * * * *                                                                      
    * * * *                                                                     
                                                                            

*/
#include<stdio.h>
int main(){
    int r,c,t;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    
    for(int i=1;i<=r;i++){
        t=c+(i-1);
        for(int j=1;j<=t;j++){
            if(i>j)
            printf(" ");
            else
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

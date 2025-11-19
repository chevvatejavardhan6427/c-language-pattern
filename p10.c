/*write a c program to print a square hallow pattern using stars(*).

* * * * * 
*       * 
*       * 
*       * 
* * * * * 


sample input: 5
sample output:
Enter the size of the square:

* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the square:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1||i==n){
            printf("* ");
            }else{
                if(j==1||j==n)
                printf("* ");
                else
                printf("  ");
                
            }
        }
        printf("\n");
    }
    return 0;
}

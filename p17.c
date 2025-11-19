/*Hollow Reverse Triangle Pattern
sample input:n = 5
sample output:
* * * * *
 *     *
  *   *
   * *
    *
    */
#include<stdio.h>
int main(){
    int n;
    printf("n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(n-i+1==n){
                if(j%2==0)
                printf(" ");
                else
                printf("*");
            }else if(j==i||j==2*n-(i))
            printf("*");
            else
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}

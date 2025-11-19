/*write a c program to print a number changing pyramid.

1 
2 3 
4 5 6 
7 8 9 10 
 
sample input: 4
sample output:
Enter the number of rows:

1 
2 3 
4 5 6 
7 8 9 10 
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
            
        }
        printf("\n");
    }
    return 0;
    
}

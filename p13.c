/*write a c program to print a number increasing pyramid.
1 
1 2 
1 2 3 
1 2 3 4 

sample input:4
sample output:
Enter the number of rows: 

1 
1 2 
1 2 3 
1 2 3 4 
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

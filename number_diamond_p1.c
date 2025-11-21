/*Write a C program using nested for loops to display a diamond-shaped number pattern based on a given integer n.
The numbers should increase from 1 up to the row number and then decrease symmetrically.
For example, if n = 4, the output should be:

Sample output:
Enter the number: 4                                                              
   1                                                                            
  121                                                                           
 12321                                                                          
1234321                                                                         
 12321                                                                          
  121                                                                           
   1  
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n - r; c++)
        {
            if (r < n)
                printf(" ");
        }
        for (int i = 1; i <= r; i++)
        {
            printf("%d", i);
        }
        for (int i = r - 1; i > 0; i--)
        {
            printf("%d", i);
        }

        printf("\n");
    }
    for (int r = 1; r <= n - 1; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            printf(" ");
        }
        for (int i = 1; i <= n - r; i++)
        {
            printf("%d", i);
        }
        for (int i = n - r - 1; i > 0; i--)
        {
            printf("%d", i);
        }

        printf("\n");
    }
    return 0;
}

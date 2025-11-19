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

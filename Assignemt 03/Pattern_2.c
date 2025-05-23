#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n-1; k++)
        {
            printf(" ");
        }
        
        for (int j = i+1; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}
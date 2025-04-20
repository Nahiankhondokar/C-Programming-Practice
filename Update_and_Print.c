#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
        
    }

    int x, v;
    for (int k = 0; k < 2; k++)
    {
        scanf("%d", &x);
        // scanf("%d", &v);
    }
    

    for (int j = n-1; j > 0; j--)
    {
        // printf("%d ", a[j]);
    }
    
    printf("%d x", x);
    // printf("%d v", v);
    return 0;
}
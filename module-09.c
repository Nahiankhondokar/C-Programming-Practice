#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int x, v;
    scanf("%d %d", &x, &v);

    for (int j = n; j >= x+1; j--)
    {
        a[j] = a[j-1];
    }
    a[x] = v;
    
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    
    return 0;
}
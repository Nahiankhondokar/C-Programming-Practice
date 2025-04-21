#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int x;
    scanf("%d", &x);
    for (int j = x; j <= n-1; j++)
    {
        a[j] = a[j+1];
    }

    for (int k = 0; k < n-1; k++)
    {
        printf("%d ", a[k]);
    }
    
    return 0;
}


// insert a item in the array.
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n+1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int x, v;
//     scanf("%d %d", &x, &v);

//     for (int j = n; j >= x+1; j--)
//     {
//         a[j] = a[j-1];
//     }
//     a[x] = v;
    
//     for (int k = 0; k < n; k++)
//     {
//         printf("%d ", a[k]);
//     }
    
//     return 0;
// }
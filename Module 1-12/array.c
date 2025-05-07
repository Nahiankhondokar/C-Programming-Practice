#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int j = 2; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }
    
    

    // arr[3] = 1500;
    // printf("%d", arr[0]);
    return 0;
}
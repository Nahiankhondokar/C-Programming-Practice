#include<stdio.h>
int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100000];
    int freq[m];

    for (int i = 1; i <= m; i++)
    {
        freq[i]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    
    for (int i = 1; i <= 5; i++)
    {
        printf("%d \n", freq[i]);
    }
    
    return 0;
}
#include<stdio.h>
// sum any of 2 number from an array and find 9.
// 5  size
// 3 6 5 8 4 array
int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j]){
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}
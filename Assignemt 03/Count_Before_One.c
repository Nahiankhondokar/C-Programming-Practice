#include<stdio.h>

int count_before_one(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 1){
            break;
        }
        sum++;
    }
    return sum;
    
}

int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int output = count_before_one(arr, n);
    printf("%d", output);
    return 0;
}
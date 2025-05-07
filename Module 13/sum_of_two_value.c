#include<stdio.h>
// sum any of 2 number from an array and find 9.
// 5  size
// 3 6 5 8 4 array
// 9 sum
int main ()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int output;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        
    }
    scanf("%d", &output);

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if(output == sum){
                printf("%d %d \n", arr[i], arr[j]);
            }
        }
        
    }
    
    return 0;
}
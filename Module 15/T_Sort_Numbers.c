#include<stdio.h>
int main ()
{
    int arr[3];
    int arr2[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        arr2[i] = arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(arr[i] >= arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }  
    }

    for (int k = 0; k < 3; k++)
    {
        printf("%d\n", arr[k]);
    }
    printf("\n");
    for (int k = 0; k < 3; k++)
    {
        printf("%d\n", arr2[k]);
    }
    
    return 0;
}
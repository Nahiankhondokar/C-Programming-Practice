// #include<stdio.h>

// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int start = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 1; k < n-i; k++)
//         {
//             printf(" ");
//         }
        
//         for (int j = 0; j < start; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         start += 2;
//     }
    
//     return 0;
// }

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
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k < n; k++)
        {
            if(arr[i] > arr[k]){
                int temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
            printf("hi ");
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

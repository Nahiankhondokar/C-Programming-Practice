#include<stdio.h>

// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     int count3 = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         if(arr[i] == 0){
//             count0++;
//         }else if(arr[i] == 1){
//             count1++;
//         }else if(arr[i] == 2){
//             count2++;
//         }else if(arr[i] == 3){
//             count3++;
//         }
//     }

//     printf("0 -> %d\n", count0);
//     printf("1 -> %d\n", count1);
//     printf("2 -> %d\n", count2);
//     printf("3 -> %d\n", count3);

//     return 0;
// }


// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int freq[5] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] == 0){
//             freq[0]++;
//         }else if(arr[i] == 1){
//             freq[1]++;
//         }else if(arr[i] == 2){
//             freq[2]++;
//         }else if(arr[i] == 3){
//             freq[3]++;
//         }
//     }
    
//     printf("0 -> %d\n", freq[0]);
//     printf("1 -> %d\n", freq[1]);
//     printf("2 -> %d\n", freq[2]);
//     printf("3 -> %d\n", freq[3]);
    

//     return 0;
// }


int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int freq[5] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = arr[i];
        freq[val]++;
    }

    for (int i = 0; i <= 5; i++)
    {
        printf("%d -> %d\n",i, freq[i]);
    }

    return 0;
}
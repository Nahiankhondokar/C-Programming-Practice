#include<stdio.h>

// Question 01
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int divided2 = 0;
//     int divided3 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]%2 == 0 && arr[i]%3 == 0){
//             divided2++;
//         }else if(arr[i]%2 == 0){
//             divided2++;
//         }else if(arr[i]%3 == 0){
//             divided3++;
//         }
//     }

//     printf("%d %d", divided2, divided3);
    
//     return 0;
// }


// Question 02
// int main ()
// {
//     char str[100001];
//     scanf("%s", &str);
//     int lenght = strlen(str);
//     char vowels[6] = {'a', 'e', 'i', 'o', 'u'};
//     int consCount = 0;
//     int match = 0;
//     for (int i = 0; i < lenght; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if(vowels[j] == str[i]){
//                 match++;
//                 break;
//             }
//         }

//         if(match == 0){
//             consCount++;
//         }
//         match = 0;
//     }

//     printf("%d", consCount);
    
//     return 0;
// }
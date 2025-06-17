#include<stdio.h>
#include<string.h>

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


// Question 03
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int case1[3];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &case1[j]);
           
//         }

//         int orgDay = case1[2];
//         int multiply = case1[0]*case1[2];
//         int sum = case1[0]+case1[1];
//         int newDay = multiply/sum;

//         printf("%d \n", orgDay - newDay);
//     }

    
//     return 0;
// }


// Question 04
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     char str[10000];
//     int count[3] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s", &str);
//         for (int j = 0; j < strlen(str); j++)
//         {
//             if(str[j] >= 'a' && str[j] <= 'z'){
//                 count[0]++; // index 0 is small letter
//             }else if(str[j] >= 'A' && str[j] <= 'Z'){
//                 count[1]++; // index 1 is capital letter
//             }else {
//                 count[2]++; // index 2 is digit
//             }

//         }
//         printf("%d %d %d \n", count[1], count[0], count[2]);
//         count[1] = 0; 
//         count[0] = 0; 
//         count[2] = 0;
//     }
    
//     return 0;
// }



// Question 05
int main ()
{
    char str[10000];
    scanf("%s", &str);
    char key[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int value[27] = {0};
    int lengthAlphabet = 26;

    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < lengthAlphabet; j++)
        {
            if(key[j] == str[i]){
                value[j]++;
            }
        }
    } 
    
    for (int i = 0; i < lengthAlphabet; i++)
    {
        if(value[i] == 0){
            continue;
        }
        printf("%c - %d \n",key[i], value[i]);
    }
    
    
    return 0;
}
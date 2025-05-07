#include<stdio.h>

// Patter 01
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < star ; j++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//         star++;
//     }
    
//     return 0;
// }


// Patter 02
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int star = n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < star; j++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//         star--;
//     }
    
//     return 0;
// }


// Patter 03
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n-1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < space; k++)
//         {
//             printf(" ");
//         }
        
//         for (int j = 0; j < star; j++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//         star += 2;
//         space--;
//     }
    
//     return 0;
// }


// Pattern 04
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space = n-1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < space; k++)
//         {
//             printf(" ");
//         }
        
//         for (int j = 0; j < star; j++)
//         {
//             printf("*");
//         }
        
//         printf("\n");
//         star++;
//         space--;
//     }
    
//     return 0;
// }


// Pattern 05
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int space = n-1;
//     int count = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int k = 0; k < space; k++)
//         {
//             printf(" ");
//         }
        
//         for (int j = 1; j <= count; j++)
//         {
//             printf("%d ", j);
//             // printf("%d", j);
//         }
        
//         printf("\n");
//         count++;
//         space--;
//     }
    
//     return 0;
// }
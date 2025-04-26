#include<stdio.h>
#include<string.h>
int main ()
{
    char strA[50], strB[50];
    scanf("%s %s", &strA, &strB);    
    int lengthA = strlen(strA);
    int lengthB = strlen(strB);
    for (int i = 0; i <= lengthB; i++)
    {
        
    }
    
    printf("%s ", strA);
    return 0;
}

// String concatenation
// int main ()
// {
//     char strA[50], strB[50];
//     scanf("%s %s", &strA, &strB);    
//     int lengthA = strlen(strA);
//     int lengthB = strlen(strB);
//     for (int i = 0; i <= lengthB; i++)
//     {
//         strA[i+lengthA] = strB[i];
//     }

//     strcat(strA, strB);
    
//     printf("%s ", strA);
//     return 0;
// }


// integer array copy
// int main ()
// {
//     char striA[101], striB[101];
//     scanf("%s %s", &striA ,&striB);
//     int length = strlen(striB);
//     for (int i = 0; i <= length; i++)
//     {
//         striA[i] = striB[i];
//     }

//     printf("%s %s", striA, striB);

    
    
//     return 0;
// }

// integer array copy
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int m;
//     scanf("%d", &m);
//     int b[m];
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &b[i]);
//     }

//     int c[n+m];
//     for (int i = 0; i < n; i++)
//     {
//         c[i] = a[i];
//     }
//     int index = n;
//     for (int i = 0; i < m; i++)
//     {
//         c[index] = b[i];
//         index++;
//     }

//     for (int i = 0; i < n+m; i++)
//     {
//         printf("%d ", c[i]);
//     }
    
//     return 0;
// }
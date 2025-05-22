#include<stdio.h>

/**
 * Print number till N...
 */
// void fun(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", i+1);
//     }
    
// }

// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     fun(n);
//     return 0;
// }


/**
 * small & heighest number find
 */

void fun(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", i+1);
        if(i != n-1){
            printf(" ");
        }
    }
}

int main ()
{
    int n;
    scanf("%d", &n);
    fun(n);
}
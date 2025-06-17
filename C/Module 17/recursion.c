#include<stdio.h>

/**
 * Recursion part 01
 */
// void fun(int i)
// {
//     if(i == 6){ // break;
//         return;
//     }
//     printf("%d\n", i);
//     fun(i+1); // inc or decrement
// }

// int main ()
// {
//     fun(1); // intial value
//     return 0;
// }



/**
 *  Recursion part 02
 *  Print N to 1
 */
// void fun(int i)
// {
//     if(i == 6){ // break;
//         return;
//     }
//     fun(i+1); // inc or decrement
//     printf("%d\n", i);
// }

// int main ()
// {
//     fun(1); // intial value
//     return 0;
// }


/**
 * Print Array by recursion.
 */
void fun(int arr[], int n, int i)
{
    if(i == n){ 
        return;
    }
    printf("%d\n", arr[i]);
    fun(arr, n, i+1);
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
    
    fun(arr, n, 0);
    return 0;
}
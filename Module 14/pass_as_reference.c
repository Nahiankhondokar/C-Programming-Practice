#include<stdio.h>
/**
 * Pass array in the function
 */
// int fun(int arr[])
// {
//     // update the referece value
//     arr[2] = 500;
// }

// int main ()
// {
//     int arr[5] = {10,20,30,40,50};
//     fun(arr); // pass by reference
    
//     printf("%d", arr[2]);
//     return 0;
// }


/**
 * Pass string array in the function
 */
void fun(char str[], int n)
{
    //
}

int main ()
{
    int str[6] = "Hello";
    printf("%s", str);
    fun(str, 5);
    
    return 0;
}
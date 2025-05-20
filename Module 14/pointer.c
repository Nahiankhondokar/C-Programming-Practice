#include<stdio.h>
// int main ()
// {
//     int n;
//     scanf("%d", &n);
//     int* ptr = &n;
//     *ptr = 50;
//     printf("%d\n", *ptr);
//     printf(" no star %p\n", ptr);
//     return 0;
// }

int main ()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // int* ptr = &n;
    // *ptr = 50;
    printf("%p\n", &arr[0]);
    // printf(" no star %p\n", ptr);
    return 0;
}
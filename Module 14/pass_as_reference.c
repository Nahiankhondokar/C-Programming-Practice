#include<stdio.h>

int fun(int arr[])
{
    // update the referece value
    arr[2] = 500;
}

int main ()
{
    int arr[5] = {10,20,30,40,50};
    fun(arr); // pass by reference
    
    printf("%d", arr[2]);
    return 0;
}
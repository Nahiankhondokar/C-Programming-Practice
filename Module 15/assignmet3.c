#include<stdio.h>

void fun(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", i+1);
    }
    
}

int main ()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}
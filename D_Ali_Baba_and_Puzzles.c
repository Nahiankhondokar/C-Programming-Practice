#include<stdio.h>
int main ()
{
    // Not completed
    int n;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int count = 0;
    while (scanf("%d", &n))
    {
        printf("%d \n", n);
        v1 = n;
        if(count == 4){
            break;
        }
        count++;
    }
     
    return 0;
}
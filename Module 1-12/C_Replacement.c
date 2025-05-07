#include<stdio.h>
int main ()
{
    int n, a;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if(a < 0){
            printf("%d ", 2);
        }else if(a > 0){
            printf("%d ", 1);
        }else {
            printf("%d ", 0);
        }
    }
    
    return 0;
}
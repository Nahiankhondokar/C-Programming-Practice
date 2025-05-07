#include<stdio.h>
int main ()
{
    int n, x;
    int result;
    scanf("%d", &n);
    
    for(int i = 1; i<=n; i++){
       scanf("%d", &x);
        do
        {
            result = x % 10;
            x = x / 10;
            printf("%d ", result);
        }while (x != 0);
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>
int main ()
{
    int n, x;
    int result;
    scanf("%d", &n);
    
    for(int i = 1; i<=n; i++){
       scanf("%d", &x);
        while (x != 0)
        {
            result = x % 10;
            x = x / 10;
            printf("%d ", result);
        }
        printf("\n");
    }
    
    return 0;
}
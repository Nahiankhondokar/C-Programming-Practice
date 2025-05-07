#include<stdio.h>
int main ()
{
    int n, a;
    int sum = 0;
    scanf("%d", &n);
    if(n > 0){
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a);
            sum += a;
        }
        
        if(sum < 0){
            printf("%d", sum * -1);
        }else {
            printf("%d", sum);
        }
    }
     
    return 0;
}
#include<stdio.h>
int main ()
{
    int n,v;
    scanf("%d", &n);
    int neg = 0, pos = 0;
    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &v);
        if(v > 0){
            pos += v;
        }else {
            neg -= v;
        }
    }

    printf("%d %d \n", pos, neg*-1);
    
    return 0;
}
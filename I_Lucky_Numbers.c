#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    if(n >= 10){
        int v1 = n/10;
        int v2 = n%10;
        if(v2%v1 == 0){
            printf("YES");
        }else if(v1%v2 == 0){
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    return 0;
}
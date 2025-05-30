#include<stdio.h>
long long int rec(int n)
{
    if(n == 1){
        return 1;
    }
    long long int num = rec(n-1);
    long long int mut = n * num;
    return mut;
}

int main ()
{
    int n;
    scanf("%d", &n);
    long long int ans = rec(n);
    printf("%lld", ans);
    return 0;
}
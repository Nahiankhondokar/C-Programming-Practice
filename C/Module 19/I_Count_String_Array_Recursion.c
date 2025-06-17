#include<stdio.h>
/**
 * Count string array by recursion
 */
int rec(char str[], int i)
{
   if(str[i] == '\0'){
    return 0;
   }
   int cnt = rec(str, i+1);
   return cnt+1;
}

int main ()
{
    char str[201];
    fgets(str, 201, stdin);
    int ans = rec(str, 0);
    printf("%d", ans);
    return 0;
}
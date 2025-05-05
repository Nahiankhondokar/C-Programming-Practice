#include<stdio.h>
int main ()
{
    char stri[10001];
    scanf("%s", &stri);
    int length = strlen(stri);
    int x=0, y=length-1;
    int result = 1;
    for (int i = 0; i < length; i++)
    {
        if(stri[x] != stri[y]){
            result = 0;
        }
        x++;
        y--;
    }
    
    if(result == 1){
        printf("YES");
    }else {
        printf("NO");
    }
    
    return 0;
}
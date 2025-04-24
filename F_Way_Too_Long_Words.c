#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d", &n);
    char s[101];
    int length = 0;
    char result1;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s);
        length = strlen(s);

        if(length > 10){
            result1 = s[0];
        }else {
            result1 = s;
        }
        break;

        // printf("%c \n", s[0]);
        // result1 = s[0];
    }
    printf("%c \n", result1);

    return 0;
}
#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    scanf("%d", &n);
    char str[101];
    int length = 0;
    char result1, result3;
    int result2;

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &str);
        length = strlen(str);

        if(length > 10){
            result1 = str[0];
            result2 = length-2;
            result3 = str[length-1];

            printf("%c%d%c\n", result1, result2, result3);
        }else {
            printf("%s\n",str);
        }
       
    }

    return 0;
}
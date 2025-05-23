#include<stdio.h>
#include<string.h>

int is_palindrome(char str[])
{
    int x = 0;
    int y = strlen(str)-1;
    while (y >= x)
    {
        if(str[x] == str[y]){
            x++;
            y--;
        }else {
            return 0;
        }
    }
    return 1;
}

int main ()
{
    char str[1001];
    scanf("%s", str);
    int output = is_palindrome(str);
    if(output == 1){
        printf("Palindrome");
    }else {
         printf("Not Palindrome");
    }

    return 0;
}
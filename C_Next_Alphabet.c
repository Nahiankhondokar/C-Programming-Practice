#include<stdio.h>
int main ()
{
    char chr;
    scanf("%c", &chr);
    if(chr >= 'a' && chr < 'z'){
        chr++;
        printf("%c", chr);
    }else {
        printf("a"); 
    }

    return 0;
}
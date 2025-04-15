#include<stdio.h>
int main ()
{
    int ch;
    scanf("%c", &ch);
    if(ch >= '0' && ch <= '9'){
          printf("IS DIGIT");
    }else {
          if(ch >= 'a' && ch <= 'z'){
               printf("ALPHA \nIS SMALL");
          }else {
               printf("ALPHA\nIS CAPITAL");
          }
    }

    return 0;
}
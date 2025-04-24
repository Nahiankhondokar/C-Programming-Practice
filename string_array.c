#include<stdio.h>
#include<string.h>
int main ()
{
    char s[100];
    gets(s);
    // printf("%s \n", s);

    // manual string length count
    // int length = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //    length++;
    // }
    
    // int sz = strlen(s);
    // int sum = 0;

    // for (int i = 0; i < sz ; i++)
    // {
    //     sum = sum + s[i];
    //     printf(" \n %d", s[i]);
    //     break;
    // }
    printf("%d", length);

    return 0;
}


// basic concept
// int main ()
// {
//     // char s[20];
//     // scanf("%s", &s); // can't take space string
//     // gets(s);
//     // fgets(s, 20, stdin); // count enter also

//     // direct intialization
//     char s[15] = "hello world";
//     printf("%s", s);

//     return 0;
// }
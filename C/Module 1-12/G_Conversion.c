#include<stdio.h>
int main ()
{
    char stri[1000001];
    scanf("%s", &stri);;
    int length = 0;
    for (int i = 0; stri[i] != '\0'; i++)
    {
       length++;
    }
   
    int output;
    for (int j = 0; j < length; j++)
    {
        if(stri[j] == ','){
           output = ' ';
        }else if(stri[j] >= 'A' && stri[j] <= 'Z'){
            output = stri[j] + 32;
        }else{
            output = stri[j] - 32;
        }
        printf("%c", output);
    }

    return 0;
}
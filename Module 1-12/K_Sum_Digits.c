#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    char str[n];
    int digits[n];
    scanf("%s", &str);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        digits[i] = str[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     count = count + digits[i];
    // }

    printf("%d", digits[1]);
    
    return 0;
}
#include<stdio.h>
void rec(int n)
{
    if(n == 0){
        return;
    }
    int last_digit = n%10; // take last digit
    int withOutLastDigit = n/10; // remove last digit
    rec(withOutLastDigit);
    printf("%d ", last_digit);
}

int main ()
{
    int n;
    scanf("%d", &n);
    int m;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if(m == 0){
            printf("0");
        }
        rec(m); 
        printf("\n");
    }    
    return 0;
}
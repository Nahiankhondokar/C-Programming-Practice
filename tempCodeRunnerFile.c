#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    if(n > 0){
        for (int i = 1; i <= 10; i++)
        {   
            if(n%i == 0){
                printf("%d\n",i);
            }
        }
    }else {
        printf("0");
    }
    
    
    return 0;
}
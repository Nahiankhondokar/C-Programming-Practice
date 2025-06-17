#include<stdio.h>
int main ()
{

    /**
     * Up-Arrow Pattern
     *   #
     *  ###
     * #####
     *   #
     *   #
     *   #
     */
    int n;
    scanf("%d", &n);
    int stars = 6;
    if(n > 1){
        int newStarts = (n - 1)/2;
        stars += newStarts;
    }
    
    // pyramid
    int inc = 1;
    for (int i = 0; i < stars; i++)
    {
        for (int k = 1; k < stars-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < inc; j++)
        {
            printf("*");
        }
        inc += 2;
        printf("\n");
    }

    // bottom stricks
    int r = 5;
    for (int m = 0; m < r; m++)
    {
        for (int k = 0; k < r; k++)
        {
            printf(" ");
        }

        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
#include<stdio.h>

void spacePrint(int n, int loopIndex, int intialNumber)
{
    for (int k = intialNumber; k < n-loopIndex; k++)
    {
        printf(" ");
    }
}

int main ()
{
    int n;
    scanf("%d", &n);
    int hashPrint = 1;
    int loopIndex = 1;
    
    // ========== Up pyramid ===============
    for (int i = 0; i < n; i++)
    {
        if(hashPrint == 1){
            spacePrint(n, i, 1);
            for (int j = 0; j < loopIndex; j++)
            {
                printf("#");
            }
            printf("\n");
            hashPrint--;
        }else{
            spacePrint(n, i, 1);
            for (int j = 0; j < loopIndex; j++)
            {
                printf("-");
            }
            printf("\n");
            hashPrint++;
        }
        loopIndex += 2;
    }

    // ========== Down pyramid ===============
    int loopIndex2 = loopIndex-4;
    for (int i = n-1; i > 0; i--)
    {
        if(hashPrint == 1){
            spacePrint(n, i, 0);
            
            // hashPrint print
            for (int j = 0; j < loopIndex2; j++)
            {
                printf("#");
            }
            printf("\n");
            hashPrint--;
           
        }else {
            spacePrint(n, i, 0);
            for (int j = 0; j < loopIndex2; j++)
            {
                printf("-");
            }
            printf("\n");
            hashPrint++;
        }
        loopIndex2 -= 2;
    }

    // Diamond Pettern = Up pyramid  + Down pyramid 
    return 0;
}
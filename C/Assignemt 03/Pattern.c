#include<stdio.h>

void spacePrint(int n, int loopCount, int intialNumber)
{
    for (int k = intialNumber; k < n-loopCount; k++)
    {
        printf(" ");
    }
}

int main ()
{
    int n;
    scanf("%d", &n);
    int hashPrint = 1;
    int loopCount = 1;
    
    // ========== Up pyramid ===============
    for (int i = 0; i < n; i++)
    {
        if(hashPrint == 1){
            spacePrint(n, i, 1);
            for (int j = 0; j < loopCount; j++)
            {
                printf("#");
            }
            printf("\n");
            hashPrint--;
        }else{
            spacePrint(n, i, 1);
            for (int j = 0; j < loopCount; j++)
            {
                printf("-");
            }
            printf("\n");
            hashPrint++;
        }
        loopCount += 2;
    }

    // ========== Down pyramid ===============
    int loopCount2 = loopCount-4;
    for (int i = n-1; i > 0; i--)
    {
        if(hashPrint == 1){
            spacePrint(n, i, 0);
            
            // hashPrint print
            for (int j = 0; j < loopCount2; j++)
            {
                printf("#");
            }
            printf("\n");
            hashPrint--;
           
        }else {
            spacePrint(n, i, 0);
            for (int j = 0; j < loopCount2; j++)
            {
                printf("-");
            }
            printf("\n");
            hashPrint++;
        }
        loopCount2 -= 2;
    }

    // Diamond Pettern = Up pyramid  + Down pyramid 
    return 0;
}
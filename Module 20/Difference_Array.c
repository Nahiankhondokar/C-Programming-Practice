#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);
    for (int k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        int arrA[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arrA[i]);
        }

        // create another array like arrA
        int arrB[n];
        for (int i = 0; i < n; i++)
        {
            arrB[i] = arrA[i];
        }

        // ascending sorting
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arrB[i] > arrB[j]){
                    int tep = arrB[i];
                    arrB[i] = arrB[j];
                    arrB[j] = tep;
                }
            }
        }

        // Difference between 2 arrays
        int arrC[n];
        for (int i = 0; i < n; i++)
        {
            arrC[i] = arrA[i] - arrB[i];
        }

        // print output
        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(arrC[i]));
        }
        printf("\n");
    }
    
    return 0;
}
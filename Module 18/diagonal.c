#include<stdio.h>

/**
 * Checking Primary diagola matrix
 */
int main ()
{
     int r,c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(r == c){
                if(i == j){
                    // This is primary diagonal
                }else{
                    if(arr[i][j] != 0){
                        flag = 1;
                        printf("This is not primary diagonal matrix"); 
                    }
                }
            }
            
        }
    }

    if(flag == 0){
        printf("This is primary diagonal matrix");               
    }
    return 0;
}
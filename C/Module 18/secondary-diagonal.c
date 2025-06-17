#include<stdio.h>
int main ()
{
    /**
     * Checking Secondary diagonla matrix
     * the indexes sum equal 2 every secondery matrix.
     */

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
                if(i+j == 2){
                    // This is secandary diagonal
                }else if(arr[i][j] != 0){
                    flag = 1;
                    printf("This is not secandary diagonal matrix"); 
                }
            }
            
        }
    }

    if(flag == 0){
        printf("This is secandary diagonal matrix");               
    }
    return 0;

}
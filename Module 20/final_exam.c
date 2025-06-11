#include<stdio.h>
int main ()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag1 = 0;
    int flag2 = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i == j && arr[i][j] == 1){
                flag1++;
            }else if(arr[i][j] != 0){
                if(i + j != c-1){
                    flag1 = 0;
                }
            }

            if(i + j == c-1 && arr[i][j] == 1) {
                flag2++;
            }else if(arr[i][j] != 0){
                if(i != j){
                    flag1 = 0;
                }
            }

             
        }
    }

    if(flag1 == c && flag2 == r){
        printf("YES");
    }else {
        printf("NO");
    }
    
    return 0;
}
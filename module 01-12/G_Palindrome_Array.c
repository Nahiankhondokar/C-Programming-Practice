#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    if(n > 0){
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int x = 0, y = n-1;
        int output = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[x] == arr[y]){
                output = 1;
                printf("yes");
            }else {
                printf("no");
                output = 0;
            }
            x++; 
            y--;
        }

        if(output == 1){
            printf("YES");
        }else {
            printf("NO");
        }
    }
    
    return 0;
}
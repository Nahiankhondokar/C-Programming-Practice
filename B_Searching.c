#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[j]);
    }

    int expected, output = 0, index;
    scanf("%d", &expected);
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == expected){
            output = 1;
            index = i;
            break;
        }
    }

    if(output == 1){
        printf("%d", index);
    }else {
        printf("-1");
    }
    
    return 0;
}
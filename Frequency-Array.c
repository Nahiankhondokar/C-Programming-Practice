#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int freq[5] = {0};
    // int x = 0, y=n-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            freq[0]++;
        }else if(arr[i] == 1){
            freq[1]++;
        }else if(arr[i] == 2){
            freq[2]++;
        }else if(arr[i] == 3){
            freq[3]++;
        }
    }
    
    printf("0 -> %d\n", freq[0]);
    printf("1 -> %d\n", freq[1]);
    printf("2 -> %d\n", freq[2]);
    printf("3 -> %d\n", freq[3]);
    

    return 0;
}
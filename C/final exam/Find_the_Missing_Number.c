#include<stdio.h>
int main ()
{
    int t;
    scanf("%d", &t);

    if(t > 0){
        
        for (int i = 0; i < t; i++)
        {
            long long int m; // expected result
            int arr[3];
            scanf("%lld", &m);
            for (int j = 0; j < 3; j++)
            {
                scanf("%d", &arr[j]);
            }

            long long int mul = 1;
            for (int k = 0; k < 3; k++)
            {
                mul *= abs(arr[k]);
            }
           
            if(mul == 0){
                printf("-1");
            }else {
                long long int last_digit = m/mul;
                long long int match_with_result = last_digit * mul;
                
                if(match_with_result == m){
                    printf("%lld", last_digit);
                }else {
                    printf("-1");
                }
            }
            printf("\n");
            
        }
    }

    return 0;
}
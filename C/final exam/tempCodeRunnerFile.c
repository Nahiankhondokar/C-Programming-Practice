   int t;
    scanf("%d", &t);
    long long int m; // expected result
    int arr[3];

    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &m);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[j]);
        }

        int mul = 1;
        for (int k = 0; k < 3; k++)
        {
            mul *= arr[k];
        }
        int last_digit = m/mul;
        int match_with_result = last_digit * mul;
        
        if(match_with_result == m){
            printf("%d", last_digit);
        }else {
             printf("-1");
        }
        printf("\n");
    }
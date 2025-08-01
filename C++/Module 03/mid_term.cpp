#include<bits/stdc++.h> 
using namespace std; 

/**
 * Ascending & Desecnding order sort
 */
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Asecending order
//     sort(arr, arr+n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     // Decending order
//     sort(arr, arr+n, greater<int>());
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



/**
 * Question - 02
 * Sort descending in another function
 */
long long int* sort_it(long long int arr[], long long n)
{
    sort(arr, arr+n, greater<long long int>());
    return arr;
}

int main()
{

    long long int n;
    cin >> n;
    long long int* arr = new long long int[n];
     long long int* arr = new long long int[n];

    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int* sorted = sort_it(arr, n);

    for (long long int i = 0; i < n; i++)
    {
        cout << sorted[i] << " ";
    }

    delete[] arr;
    return 0;
}
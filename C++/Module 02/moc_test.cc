#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 *  Daynamic array Declar & print in the Heap memory
 */
int * fun(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

   return arr;
}

int main()
{
    int n;
    int *p = new int;
    cin >> n;
    int* result = fun(n);

    for (int i = 0; i < n; i++)
    {
        cout << result[i];
    }

    delete[] result;
    return 0;
}
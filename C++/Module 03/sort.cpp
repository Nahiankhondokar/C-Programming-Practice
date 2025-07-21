#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 * Sort in c++ by build-in function.
 * Ascending or Descending sort
 * Sort --> first index, last index + 1
 */


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     
    sort(arr, arr+n); // ascending
    // sort(arr, arr+n, greater<int>()); // descending
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}



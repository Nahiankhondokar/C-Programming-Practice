#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

int main()
{
    // int n[5];
    int *n = new int[5]; // dynamic array
    for (int i = 0; i < 5; i++)
    {
        cin >> n[i];
        // scanf("%d", &n[i]);
    }

    cout << n; // Store first index address

    for (int j = 0; j < 5; j++)
    {
        cout << n[j] << " " << endl;
         // printf("%d ", n[j]);
    }
    
    return 0;
}
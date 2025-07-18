#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 * Return variable from stack memory is valid.
 * because it's return only a value which i premitive value (not changeable)
 * 
 */
int fun(){
    int x = 15;
    return x; // retur only value;
}

int main()
{
    int n = fun();
    cout << n;
    return 0;
}



/** 
 * return an array from stack memory, which is not valid.
 * because stack memory delete the data after return the function.
 * 
 */
// int* fun(){
//     int x[10] = {1,2,3};
//     return x;
// }

// int main()
// {
//     int* n = fun();
//     cout << *n;
//     return 0;
// }
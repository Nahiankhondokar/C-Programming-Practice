#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally
/**
 *  Dynamic variables
 */
int main()
{
    // variables in C
    int n;
    scanf("%d", &n);
    printf("%d", n);

    // Dynamic variables in C++.
    // Store in Heap memory
    int n = 1000;
    int * p = new int; // daynamic Var.
    *p = 5000; // Dereferance Value
    cout << *p << endl;


    return 0;
}
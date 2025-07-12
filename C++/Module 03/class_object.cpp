#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 *  inputs
 *  
 * Rakib Ahmend
    20 4.5
    Shakib Ahmend
    20 4.5
 */
class Student {
    public :
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte
};

int main()
{
    // Student a,b; combind declaration class

    Student a;
    cin.getline(a.name, 100); // with space
    cin >> a.roll >> a.gpa;

    Student b;
    cin.ignore(); // skip the enter after first data
    cin.getline(b.name, 100); // with space
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa;

   return 0;
}
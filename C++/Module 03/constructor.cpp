#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 *  inputs
 *  
 * 10 20 4.5
 */
class Student {
    public :
    int cls;        // 4 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte

    Student(int c, int r, double g){
        cls = c;
        roll = r;
        gpa = g;
    }
};

int main()
{
    Student a(10, 20, 4.5);
    // Student b(11, 15, 3.8);

    cout << a.cls << " " << a.roll << " " << a.gpa << endl;
    // cout << b.cls << " " << b.roll << " " << b.gpa;

   return 0;
}
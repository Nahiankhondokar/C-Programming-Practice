#include<bits/stdc++.h> // This is for all c++ headers
using namespace std; // for std globally

/**
 *  
 *  
 */
class Student {
    public :
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte

    Student(int roll, double gpa){
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student nahian(10, 4.5);
    return nahian;
}


int main()
{
    Student obj = fun();
    cout << obj.roll << " " << obj.gpa;
    return 0;
}



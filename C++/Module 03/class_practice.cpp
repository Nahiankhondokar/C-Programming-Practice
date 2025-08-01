#include<bits/stdc++.h> 
using namespace std; 

class Student {

    public :
    string name;
	int roll;
	char section;
	int math_marks;
	int cls;

    Student(string name, int roll, char section, int math_marks, int cls){
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student misu("Misu", 5, 'A', 80, 11);
    Student shuvo("Shuvo", 3, 'B', 85, 11);
    Student nipu("Nipu", 2, 'C', 70, 11);

    if(misu.math_marks > shuvo.math_marks && nipu.math_marks){
        cout << "Misu has highest mark in math";
    }else if(shuvo.math_marks > misu.math_marks && nipu.math_marks) {
        cout << "shuvo has highest mark in math";
    }else if(nipu.math_marks > misu.math_marks && shuvo.math_marks) {
        cout << "nipu has highest mark in math";
    }
    return 0;
}
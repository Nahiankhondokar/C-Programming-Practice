#include<bits/stdc++.h> 
using namespace std; 

/**
 * -10 = 10
 * 10 < 9
 * 5 > 6
 * Print Right or Wrong
 */
int main ()
{  
    int a;
    char s;
    int b;
    cin >> a >> s >> b;
   
    if(s == '>'){
        if(a > b){
            cout << "Right";
        }else {
            cout << "Wrong";
        }
    }else if(s == '<'){
         if(a < b){
            cout << "Right";
        }else {
            cout << "Wrong";
        }
    }else if(s == '='){
        if(a == b){
            cout << "Right";
        }else {
            cout << "Wrong";
        }
    }
    else {
        cout << "Wrong";
    }
    
    return 0;
}
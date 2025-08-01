#include<bits/stdc++.h> 
using namespace std; 


/**
 * 5 + 10 = 15
 * Print yes or right answer
 */
int main()
{
    int a;
    char s;
    int b;
    char q;
    int c;

    cin >> a >> s >> b >> q >> c;

    if(s == '+'){
        int result = a + b;
         if(c == result){
            cout << "Yes";
        }else {
            cout << result;
        }
    }else if(s == '-'){
        int result = a - b;
         if(c == result){
            cout << "Yes";
        }else {
            cout << result;
        }
    }else if(s == '*'){
        int result = a * b;
        if(c == result){
            cout << "Yes";
        }else {
            cout << result;
        }
    }

    return 0;
}


/**
 * -10 = 10
 * 10 < 9
 * 5 > 6
 * Print Right or Wrong
 */
// int main ()
// {  
//     int a;
//     char s;
//     int b;
//     cin >> a >> s >> b;
   
//     if(s == '>'){
//         if(a > b){
//             cout << "Right";
//         }else {
//             cout << "Wrong";
//         }
//     }else if(s == '<'){
//          if(a < b){
//             cout << "Right";
//         }else {
//             cout << "Wrong";
//         }
//     }else if(s == '='){
//         if(a == b){
//             cout << "Right";
//         }else {
//             cout << "Wrong";
//         }
//     }
//     else {
//         cout << "Wrong";
//     }
    
//     return 0;
// }
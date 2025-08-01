#include<bits/stdc++.h> 
using namespace std; 

/**
 * 5
 * 1 3 2 3 1
 * Palindrome array
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

    int x = 0;
    int y = 0;
    int flag = 1;
    for (int j = 0; j < n; j++)
    {
        x = arr[j];
        for (int k = n-j; k > j; k--)
        {
            y = arr[k - 1];
            if(x != y){
                flag = 0;
                break;
            }else if(x == y ){
                break;
            }
        }
    }

    if(flag == 1){
        cout << "YES";
    }else {
         cout << "NO";
    }

    return 0;
}

/**
 * 5 + 10 = 15
 * Print yes or right answer
 */
// int main()
// {
//     int a;
//     char s;
//     int b;
//     char q;
//     int c;

//     cin >> a >> s >> b >> q >> c;

//     if(s == '+'){
//         int result = a + b;
//          if(c == result){
//             cout << "Yes";
//         }else {
//             cout << result;
//         }
//     }else if(s == '-'){
//         int result = a - b;
//          if(c == result){
//             cout << "Yes";
//         }else {
//             cout << result;
//         }
//     }else if(s == '*'){
//         int result = a * b;
//         if(c == result){
//             cout << "Yes";
//         }else {
//             cout << result;
//         }
//     }

//     return 0;
// }


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
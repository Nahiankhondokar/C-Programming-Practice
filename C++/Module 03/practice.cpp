#include<bits/stdc++.h> 
using namespace std; 

/**
* 1 -> test case
* 4 -> array number
* 20 1 9 4 -> array value

 * arr[0]+arr[1]+b-a = sum
 *  1<=b<a<=N
 */
int main ()
{
    int t;
    cin >> t;

    for (int z = 0; z < t; z++){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int a = 0;
        int b = 0;

        int result = INT_MAX;
            for (int j = 0; j < n; j++){
                for (int k = j+1; k < n; k++){
                    a = j+1;
                    b = k+1;
                    // cout << arr[j] << " " << arr[k] << " " << b << " " << a << endl;
                    int cal = arr[j]+arr[k]+b-a;
                    if(result > cal){
                        result = cal;
                    }
                }
        }

        cout << result << endl;
    }
    
    return 0;
}

/**
 * 5
 * 1 3 2 3 1
 * Palindrome array
 */
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n]; 
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int x = 0;
//     int y = 0;
//     int flag = 1;
//     for (int j = 0; j < n; j++)
//     {
//         x = arr[j];
//         for (int k = n-j; k > j; k--)
//         {
//             y = arr[k - 1];
//             if(x != y){
//                 flag = 0;
//                 break;
//             }else if(x == y ){
//                 break;
//             }
//         }
//     }

//     if(flag == 1){
//         cout << "YES";
//     }else {
//          cout << "NO";
//     }

//     return 0;
// }

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
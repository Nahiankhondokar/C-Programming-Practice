#include<bits/stdc++.h> 
using namespace std; 

/**
 * Ascending & Desecnding order sort
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

//     // Asecending order
//     sort(arr, arr+n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     // Decending order
//     sort(arr, arr+n, greater<int>());
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



/**
 * Question - 02
 * Sort descending in another function
 * Dynamic array in separate function 
 * 5
 * 8 6 1 5 4
 */
// long long int* sort_it(long long int n)
// {
//     long long int* arr = new long long int[n];
//     for (long long int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr+n, greater<long long int>());
//     return arr;
// }

// int main()
// {
//     long long int n;
//     cin >> n;

//     long long int* sorted = sort_it(n);

//     for (long long int i = 0; i < n; i++)
//     {
//         cout << sorted[i] << " ";
//     }

//     return 0;
// }

/**
 *  Question 03
 *  String sort without line break spacing.
 * monkey
 * i  love code
 * ekmnoy
 * cdeeiloov
 */
// int main()
// {
//     char str[1000000];
//     char newStr[1000000];
//     while(cin.getline(str, 1000000)){

//         // remove spaces
//         int newInx = 0;
//         for (int i = 0; str[i] != '\0' ; i++)
//         {
//             if(str[i] != ' '){
//                 newStr[newInx++] = str[i]; 
//             }
//         }

//         newStr[newInx] = '\0';
//         sort(newStr,newStr+newInx);
        
//         cout << newStr << endl;
//     }

//     return 0;
// }


/** 
 * Questio 04
 * Find the highest mark information
 * 3 -> test case
1 sakib A 50
2 rakib D 96
3 akib C 90
1 sakib A 50
2 rakib D 96
3 akib C 96
1 sakib A 50
2 rakib D 50
3 akib C 40
 */
// int main()
// {
//     int t;
//     cin >> t;

//     for (int j = 0; j < t; j++)
//     {
//         string name;
//         int id;
//         char section;
//         int mark;

//         int markFlag = INT_MIN;
//         int idFlag = 0;
//         char sectionFlag = ' ';
//         string nameFlag = "";
//         for (int i = 0; i < 3; i++)
//         {
//             cin >> id >> name >> section >> mark;
//             if(markFlag < mark){
//                 idFlag = id;
//                 nameFlag = name;
//                 sectionFlag = section;
//                 markFlag = mark;
//             }
//         }

//         cout << idFlag << " " << nameFlag << " " << sectionFlag << " "   << markFlag << endl;

//     }
    

//     return 0;
// }



/**
 * Question 05
 * Get the sum value by any three digits.
 * Multi layer array.
 * when we use nested array, we need to remember one thing, if the full nested array can run then run the array. otherwise array will not excecute.like,
 * we have 3 nested array but 2 arrays condition is true anothers condition is false then the full array will not execute.
 * Here has the perfect example for the nested array
 * intpus:
 * 5
5 10
1 2 3 4 5
5 6
4 2 3 5 4
3 6
2 2 2
4 4
2 8 1 5
1 3
1
 */
int main()
{
    int t;
    cin >> t;
    

   for (int z = 0; z < t; z++)
   {
        int n;
        cin >> n;
        int s;
        cin >> s;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }
        
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    int sum = arr[i] + arr[j] + arr[k];
                    if(sum == s){
                        // cout << arr[i] << arr[j] << arr[k] << endl;
                        // cout << i << j << k << endl;
                        flag = 1;
                        break;
                    }else {
                        // cout << arr[i] << arr[j] << arr[k] << endl;
                        // cout << i << j << k << endl;
                     }
                }
            }
        }

        if(flag == 1){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
   }
   

    return 0;
}
#include<iostream>
using namespace std;
#include<iomanip>
#include<algorithm>
/**
 * printf -> std::cout <<
 * scanf -> std::cin >> 
 * new line "\n" -> std::endl
 * space -> << " " <<
 * 
 * ascii value print -> std::cout << (int)a
 * EOF -> while loop
 * 
 */
// int main()
// {
//     char txt[20];
//     std::cin >> txt;
//     std::cout << txt << std::endl << "Hi";
//     return 0;
// }


/**
 * String array
 */
int main()
{
    // without space
    // char str[20];
    // std::cin >> str;
    // std::cout << str;

    // with space
    // int n;
    // char str[20];
    // cin >> n;
    // cin.ignore(); // skip the enter
    // cin.getline(str, 20);
    // cout << n << endl;
    // cout << str;

    char n;
    cin >> n;
    cout << (int)n;
    
    return 0;
}
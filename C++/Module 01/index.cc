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
int main()
{
    char txt[20];
    std::cin >> txt;
    std::cout << txt << std::endl << "Hi";
    return 0;
}
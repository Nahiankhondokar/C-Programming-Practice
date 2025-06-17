#include<iostream>
/**
 * printf -> std::cout <<
 * scanf -> std::cin >> 
 * new line "\n" -> std::endl
 * space -> << " " <<
 */
int main()
{
    char txt[20];
    std::cin >> txt;
    std::cout << txt << std::endl << "Hi";
    return 0;
}
#include <iostream>

int main(int argc, const char **argv)
{
    int num1 = 0, num2 = 0;
    char symbol = 0;
    std::cout << "\nEnter the equation: ";
    std::cin >> num1 >> symbol >> num2;

    ((symbol == '+') ? std::cout << "\nResult: " << num1 + num2 : 
    symbol == '-' ? std::cout << "\nResult: " << num1 - num2 : 
    symbol == '*'   ? std::cout << "\nResult: " << num1 * num2 : 
    symbol == '/'   ? std::cout << "\nResult: " << num1 / num2 : 
    std::cout << "\nINVALID ERROR!");

    return 0;
}
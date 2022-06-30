#include <iostream>

int main(int argc, const char **argv)
{
    int num1 = 0, num2 = 0;
    char symbol = 0;
    std::cout << "Enter the equation: "; 
    std::cin >> num1 >> symbol >> num2;

    ((symbol == '+') ? std::cout << "Result: " << num1 + num2 : 
    symbol == '-' ? std::cout << "Result: " << num1 - num2 : 
    symbol == '*'   ? std::cout << "Result: " << num1 * num2 : 
    symbol == '/'   ? std::cout << "Result: " << num1 / num2 : 
    std::cout << "INVALID ERROR!");

    return 0;
}
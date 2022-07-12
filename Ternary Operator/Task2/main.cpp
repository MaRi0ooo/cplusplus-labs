#include <iostream>

int main(int argc, const char **argv)
{
    int num1 = 0, num2 = 0, min = 0;
    std::cout << "\nEnter two nums: ";
    std::cin >> num1 >> num2;

    // 1
    min = ((num1 < num2) ? num1 : num2);
    std::cout << "\nmin element: " << min << '\n';

    // 2
    ((num1 == num2) ? std::cout << "result: nums equal!" : num1 < num2 ? std::cout << "result: " << num1 << " " << num2
                                                                       : std::cout << "result: " << num2 << " " << num1);

    return 0;
}
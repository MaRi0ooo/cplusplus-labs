#include <iostream>

int main(int argc, const char **argv)
{
    int num = 0, degree = 0;
    std::cout << "Enter num: ";
    std::cin >> num;

    // 1
    ((num == 0) ? std::cout << num << " is equal 0!\n" : num > 0 ? std::cout << num << " is positive!\n"
                                                                 : std::cout << num << " is negative!\n");

    // 2
    ((num % 2 == 0) ? std::cout << num << " is even!\n" : std::cout << num << " is odd!\n");

    // 3
    ((num % 2 == 0) ? std::cout << num << " = " << num * 3 << '\n' : std::cout << num << " = " << num / 2 << '\n');

    // 4
    std::cout << "Enter a degree from 0 to 7:";
    std::cin >> degree;

    ((degree > 7 || degree < 0) ? std::cout << "INVALID INPUT!\n" : std::cout << num << " in " << degree << " = " << (num * degree) << '\n');

    return 0;
}
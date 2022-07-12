#include <iostream>

int main(int argc, const char **argv)
{
    int num = 0, degree = 0;
    std::cout << "\nEnter num: "; std::cin >> num;

    // 1
    ((num == 0) ? std::cout << '\n' << num << " is equal 0!\n" : num > 0 ? std::cout << '\n' << num << " is positive!\n"
                                                                 : std::cout << '\n' << num << " is negative!\n");

    // 2
    ((num % 2 == 0) ? std::cout << num << " is even!\n" : std::cout << num << " is odd!\n");

    // 3
    ((num % 2 == 0) ? std::cout << num << " = " << num * 3 << '\n' : std::cout << num << " = " << num / 2 << '\n');

    // 4
    std::cout << "\nEnter a degree from 0 to 7: ";
    std::cin >> degree;

    ((degree > 7 || degree < 0) ? std::cout << "INVALID INPUT!\n" : std::cout << num << "^" << degree << " = " << (num * degree) << '\n');

    return 0;
}
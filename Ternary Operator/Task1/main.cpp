#include <iostream>

int main(int argc, const char **argv)
{
    int NUM = 0, degree = 0;
    std::cout << "Enter num: ";
    std::cin >> NUM;

    // 1
    (NUM == 0) ? std::cout << NUM << " is equal 0!\n" : NUM > 0 ? std::cout << NUM << " is positive!\n" : std::cout << NUM << " is negative!\n";

    // 2
    (NUM % 2 == 0) ? std::cout << NUM << " is even!\n" : std::cout << NUM << " is odd!\n";

    // 3
    (NUM % 2 == 0) ? std::cout << NUM << " = " << NUM * 3 << '\n' : std::cout << NUM << " = " << NUM / 2 << '\n';

    // 4
    std::cout << "Enter a degree from 0 to 7:"; 
    std::cin >> degree;

    (degree > 7 || degree < 0) ? std::cout << "INVALID INPUT!\n" : std::cout << NUM << " in " << degree << " = " << (NUM*degree) << '\n';

    return 0;
}
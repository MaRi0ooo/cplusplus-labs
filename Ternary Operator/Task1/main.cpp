#include <iostream>

int main(int argc, const char **argv)
{
    int num = 0;
    std::cout << "Enter num: "; std::cin >> num;

    /* The user enters a number. Determine if this number is positive, negative or equal zero */
    (num == 0) ? std::cout << num << " is equal 0!\n" : num > 0 ? std::cout << num << " is positive!\n" : std::cout << num << " is negative!\n";

    /* Determine if it's even */
    (num % 2 == 0) ? std::cout << num << " is even!\n" : std::cout << num << " is odd!\n";

    /* If it's even, multiply it by three, otherwise divide by two. Display the result on the screen */
    (num % 2 == 0) ? std::cout << "result: "<< num * 3 << '\n' : std::cout << "result: "<< num / 2 << '\n';

    return 0;
}
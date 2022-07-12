#include <iostream>

int main(int argc, const char **argv)
{
    int num1 = 0, num2 = 0, num3 = 0,
        num4 = 0, num5 = 0, result = 0;
    std::cout << "\nEnter five grades: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    result = (num1 + num2 + num3 + num4 + num5) / 5;
    ((result == 4 || result > 4) ? std::cout << "\nGrade: " << result << "\nStudent admitted!\n" : std::cout << "\nGrade: " << result << "\nStudent not admitted!\n");

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char **argv)
{
    srand(static_cast<unsigned int>(time(0)));
    
    int cnt = 0, c1 = 0, c2 = 0, sum = 0;
    const int ROW = 4, COL = 5;
    int A[ROW][COL] = {{}};

    // Matrix filling
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            A[i][j] = static_cast<int>(rand() % 10);

    std::cout << "\nMatrix: \n\n";
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
            std::cout << A[i][j] << ' ';
        std::cout << '\n';
    }

    std::cout << "\nEnter the c1: "; std::cin >> c1;
    std::cout << "Enter the c2: "; std::cin >> c2;

    std::cout << "\nTask 5: \n\n";
    for (int i = 0; i < c1; ++i)
    {
        for (int j = 0; j < c2; ++j)
            if ((i == c1) && (j == c2))
                cnt++;
            else
                std::cout << A[i][j] << ' ';
        std::cout << '\n';
    }
    sum = (c1 * c2);
    std::cout << "\nNumber of matrix elements that lie outside the interval [c1,c2]: " << sum - cnt << '\n';

    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char **argv)
{
    const int ROW = 5, COL = 5;
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

    std::cout << "\nTask 4: \n\n";
    int cnt_even = 0;
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COL; ++j)
        {
            if ((i + 1) <= j)
            {
                std::cout << A[i][j] << ' ';
                if (A[i][j] % 2 == 0) { cnt_even++; }
            }
            else { std::cout << "* "; }
        }
        std::cout << '\n';
    }
    std::cout << "\nThe number of even elements above the main diagonal: " << cnt_even << '\n';

    return 0;
}
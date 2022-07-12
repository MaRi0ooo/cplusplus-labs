#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <ctime>

using namespace std;

int main(int argc, const char **argv)
{
    srand(static_cast<unsigned int>(time(0)));

    int **mat, ROW, COL;
    int sum = 0, cnt = 0;

    std::cout << "\nEnter num of rows: ";
    std::cin >> ROW;
    std::cout << "Enter num of columns: ";
    std::cin >> COL;

    // Allocation of memory for the matrix
    mat = new int *[ROW];
    for (int i = 0; i < ROW; ++i)
        mat[i] = new int[COL];

    // Matrix filling
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            mat[i][j] = static_cast<int>(rand() % 10);

    std::cout << "\nMatrix: \n\n";
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            std::cout << mat[i][j] << ' ';
        std::cout << '\n';
    }

    std::cout << "\nTask 5: \n\n";
    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
            sum = sum + mat[j][i];
        for (int a = 0; a < ROW; a++)
            if (mat[a][i] > sum - mat[a][i])
                cnt++;
        sum = 0;
    }
    std::cout << "Number of special elements: " << cnt << '\n';

    return 0;
}
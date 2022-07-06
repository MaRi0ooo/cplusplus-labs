#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char **argv)
{
    srand(static_cast<unsigned int>(time(0)));

    int **mat, N, M;

    std::cout << "Enter the number of rows: ";
    std::cin >> N;
    std::cout << "Enter number of columns: ";
    std::cin >> M;

    // Allocation of memory for the matrix
    mat = new int *[N];
    for (int i = 0; i < N; ++i)
        mat[i] = new int[M];

    // Matrix filling
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            mat[i][j] = static_cast<int>(rand() % (10 - (-10)) - 10);

    std::cout << "\nMatrix: \n\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            std::cout << mat[i][j] << ' ';
        std::cout << '\n';
    }

    std::cout << "\nTask 3: \n\n";
    int min = mat[0][0], location[2];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            if (mat[i][j] < min)
            {
                min = mat[i][j];
                location[0] = i;
                location[1] = j;
            }
        }
    }
    std::cout << "Min element " << min << " in " << location[0] << " row and " << location[1] << " column";

    // Freeing up memory for the allocated array
    for (int i = 0; i < N; ++i)
        delete[] mat[i];
    delete[] mat;

    return 0;
}
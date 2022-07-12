#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, const char **argv)
{
    srand(static_cast<unsigned int>(time(0)));

    int **A, N, M;

    std::cout << "\nEnter num of rows: ";
    std::cin >> N;
    std::cout << "Enter num of columns: ";
    std::cin >> M;

    // Allocation of memory for the matrix
    A = new int *[N];
    for (int i = 0; i < N; ++i)
        A[i] = new int[M];

    // Matrix filling
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            A[i][j] = static_cast<int>(rand() % (10 - (-10)) - 10);

    std::cout << "\nMatrix: \n\n";
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            std::cout << A[i][j] << ' ';
        std::cout << '\n';
    }

    std::cout << "\nTask 2: \n\n";
    int max = A[0][0];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if (A[i][j] > max)
                max = A[i][j];
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            if (A[i][j] < 0)
                A[i][j] = max;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
            std::cout << A[i][j] << ' ';
        std::cout << '\n';
    }
    std::cout << "\nMax element in matrix: " << max;

    // Freeing up memory for the allocated array
    for (int i = 0; i < N; ++i)
        delete[] A[i];
    delete[] A;

    return 0;
}
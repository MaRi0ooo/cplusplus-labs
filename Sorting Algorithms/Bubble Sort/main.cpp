#include <iostream>
#include <cstdlib>
#include <ctime>

void bubble_sort_up(int, const int &);

int main(int argc, char **argv)
{
    const int size = 20;
    int arr[size];
    int max = 99, min = -99;

    srand(static_cast<unsigned int>(time(0)));
    std::cout << "Unsorted array: ";
    for (int i = 0; i < size; i++)
        arr[i] = static_cast<int>(rand() % (max - min) + min);
    for (const auto &value : arr)
        std::cout << ' ' << value;
    std::cout << '\n';

    int buff(0);
    std::cout << "\nSorted array [1.1]: ";
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                buff = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = buff;
            }
        }
    }
    for (const auto &value : arr)
        std::cout << ' ' << value;
    std::cout << '\n';

    buff = 0;
    std::cout << "\nSorted array [1.2]: ";
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = size - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1] && arr[j] < 0)
            {
                buff = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = buff;
            }
            else if (arr[j] < arr[j - 1] && arr[i] < 0)
            {
                buff = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = buff;
            }
        }
    }
    for (const auto &value : arr)
        std::cout << ' ' << value;
    std::cout << '\n';

    buff = 0;
    int first = 0, second = 0;
    std::cout << "\nSorted array [1.3]: ";
    for (int i = 2; i < 9; i++)
    {
        for (int j = 2; j < 9 - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                buff = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buff;
            }
            else if (arr[j] < arr[j + 1])
            {
                buff = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = buff;
            }
        }
    }
    for (const auto &value : arr)
        std::cout << ' ' << value;
    std::cout << '\n';

    return 0;
}
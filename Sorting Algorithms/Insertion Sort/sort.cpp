#include "sort.hpp"

int randomArray(int *arr, int size)
{
    srand(static_cast<unsigned int>(time(0)));
    int max = 99, min = -99;

    for (int i = 0; i < size; i++)
        arr[i] = static_cast<int>(rand() % (max - min) + min);
    return *arr;
}
void showArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        std::cout << ' ' << arr[i];
    std::cout << '\n';
}

void sortDown(int *arr, int size)
{
    int buff(0);
    for (int i = 1; i < size; i++)
    {
        buff = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > buff)
            {
                arr[j + 1] = arr[j];
                arr[j] = buff;
            }
            else if (arr[j] < buff)
            {
                arr[j + 1] = arr[j];
                arr[j] = buff;
            }
        }
    }
}
void sortNegativ_toUp_Positiv_toDown(int *arr, int size)
{
    int neg_numbers(0);
    for(int i =0; i < size; i++)
        if(arr[i] < 0)
            neg_numbers++;


    int buff(0);
    for (int i = 1; i < size; i++)
    {
        buff = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > buff)
            {
                arr[j + 1] = arr[j];
                arr[j] = buff;
            }
        }
    }
    for(int i = neg_numbers + 1; i < size; i++)
    {
        buff = arr[i];
        for(int j = i - 1; j >= neg_numbers; j--)
        {
            if(arr[j] < buff)
            {
                arr[j+1] = arr[j];
                arr[j] = buff;
            }
        }
    }
}
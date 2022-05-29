#include "sort.hpp"

int randomArray(int *arr, int size) {
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

void sortDown(int *arr, int size) {
	int buff(0);
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
}

void sortNegativ_toUp_Positiv_toDown(int *arr, int size) {
	int buff(0);
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
}
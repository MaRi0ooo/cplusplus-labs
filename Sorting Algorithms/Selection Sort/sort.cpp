#include "sort.hpp"

inline void SWAP(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
int randomArray(int *arr, int size) {
	srand(static_cast<unsigned int>(time(0)));
	int max = 99, min = -99;
	
	for (int i = 0; i < size; i++)
		arr[i] = static_cast<int>(rand() % (max - min) + min);
	return *arr;
}
void showArray(int *arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << ' ' << arr[i];
	std::cout << '\n';
}

void sortDown(int *arr, int size) {
    int MIN(0);
	for (int i = 0; i < size - 1; i++)
	{
		MIN = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] > arr[MIN])
			{
				MIN = j;
			}
		}
		SWAP(arr[MIN], arr[i]);
	}
}
void sortNegativ_toUp_Positiv_toDown(int *arr, int size) {
    int MIN(0);
    for (int i = 0; i < size - 1; i++)
	{
		int MIN = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[MIN] && (arr[j] < 0))
			{
				MIN = j;
				SWAP(arr[MIN], arr[i]);
			}
			else if (arr[j] < arr[MIN] && (arr[j] < 0))
			{
				MIN = j;
				SWAP(arr[MIN], arr[i]);
			}
		}
	}
}




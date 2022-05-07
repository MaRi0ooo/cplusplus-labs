#include <iostream>
#include <cstdlib>
#include <ctime>

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
	
	int MIN(0), temp(0);
	std::cout << "\nSorted array [1.1]: ";
	
	for(int i = 0; i < size - 1; i++)
	{
		MIN = i;
		for(int j = i + 1; j < size; j++)
			if(arr[j] > arr[MIN])
				MIN = j;
		temp = arr[i];
		arr[i] = arr[MIN];
		arr[MIN] = temp;
	}
	for(const auto &value : arr)
		std::cout << ' ' << value;
	std::cout << '\n';
	
	MIN = 0; temp = 0;
	std::cout << "\nSorted array [1.2]: ";
	
	for(int i = 0; i < size - 1; i++)
	{
		MIN = i;
		for(int j = i + 1; j < size; j++)
			if(arr[j] < arr[MIN])
				MIN = j;
		temp = arr[i];
		arr[i] = arr[MIN];
		arr[MIN] = temp;
	}
	for (int i = 0; i < size - 1; i++)
    {
       MIN = i;
       for (int j = i + 1; j < size - i; j++)
       {
           if (arr[j] < arr[MIN] && arr[j] < 0)
           {
               MIN = j;
               temp = arr[i];
               arr[i] = arr[MIN];
               arr[MIN] = temp;
           }
           else if (arr[j] < arr[MIN] && arr[j] > 0)
           {
               MIN = j;
               temp = arr[i];
               arr[i] = arr[MIN];
               arr[MIN] = temp;
           }
       }
    }
	for(const auto &value : arr)
		std::cout << ' ' << value;
	std::cout << '\n';
	
	return 0;
}
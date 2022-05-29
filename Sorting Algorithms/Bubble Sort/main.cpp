#include "sort.hpp"

int main(int argc, char **argv)
{
    const int size = 20;
	int *arr = new int[size];
    
    randomArray(arr, size);
    std::cout << "Unsorted array: ";
    showArray(arr, size);
    
    
    sortDown(arr, size);
    std::cout << "\nSorted array [1.1]: ";
    showArray(arr, size);
    
    sortNegativ_toUp_Positiv_toDown(arr, size);
    std::cout << "\nSorted array [1.2]: ";
    showArray(arr, size);
    
    
    system("pause");
    delete[] arr;
    return 0;
}
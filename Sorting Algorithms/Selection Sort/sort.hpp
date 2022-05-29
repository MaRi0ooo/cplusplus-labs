#ifndef SORT_HPP
#define SORT_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

inline void SWAP(int &a, int &b);
int randomArray(int *arr, int size);
void showArray(int *arr, int size);

void sortDown(int *arr, int size);
void sortNegativ_toUp_Positiv_toDown(int *arr, int size);

#endif // !SORT_HPP
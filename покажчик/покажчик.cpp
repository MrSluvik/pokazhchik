// Використовуючи два покажчики на масив цілих чисел, скопіювати один масив у інший.
#include<iostream>
using namespace std;

int main() {

	const int size = 5;
	int arr1[size] = { 2,41,15,7,57 };
	int arr2[size];

	int* oldarr1 = arr1;
	int* newarr2 = arr2;
	for (int i = 0; i < size; i++)
	{
		*(newarr2 + i) = *(oldarr1 + i);
		
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i]<<" ";
	}
}
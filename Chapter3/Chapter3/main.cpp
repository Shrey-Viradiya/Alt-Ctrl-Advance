#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main() {
	// C style memory allocation
	
	//int *p = (int *) malloc(sizeof(int));
	int *p = (int *) calloc(1, sizeof(int));
	if (p == NULL) {
		printf("Failed to allocate memory");
		return -1;
	}
	*p = 5;
	printf("%d\n", *p);
	free(p);
	p = NULL;
	free(p);

	// C++ style memory allocation
	int *x = new int(5);
	*x = 6;
	cout << *x << endl;
	delete x;
	x = nullptr;

	int *arr = new int[5];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
	}
	int *arr2 = new int[5]{ 1,2,3,4,5 }; // Uniform initialization
	delete[]arr;
	arr = nullptr;
	delete[]arr2;
	arr2 = nullptr;

	// 2D array

	int **two = new int *[2];
	for (int i = 0; i < 2; i++)
	{
		two[i] = new int[3]{ i * 1,i * 2,i * 3 };
	}

	cout << two[1][1] << endl;

	return 0;
}
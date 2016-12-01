#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

const int  SIZE = 6;


void FillAndShowArray(int arr[][SIZE], const int size)
{
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		cout << "| ";
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = 10 + rand() % 91;

			cout << setw(4) << arr[i][j] << " ";
		}
		cout << " |" << endl;
	}
}

int FindMinElement(int arr[][SIZE], const int size)
{
	int min = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
	}
	return min;
}



int FindMaxElement(int arr[][SIZE], const int  size)
{
	int max = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	return max;
}





int main(int argc, char* argv[])
{
	

	int matrix[SIZE][SIZE] = {};

	FillAndShowArray(matrix, SIZE); 
	cout << endl;
	cout << "Minimum: " << FindMinElement(matrix, SIZE) << endl;
	cout << "Maximum: " << FindMaxElement(matrix, SIZE) << endl;

	_getch();

	return 0;
}



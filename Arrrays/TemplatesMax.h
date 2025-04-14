#pragma once
#include"constants.h"
#include"stdafx.h"
template<typename T>
T MaxValueIn(T arr[], const int n);
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);


template<typename T>
T MaxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>
T MaxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];

		}
	}
	return max;
}

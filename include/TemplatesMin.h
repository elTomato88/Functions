#pragma once
#include"constants.h"
#include"stdafx.h"

template<typename T>
T MinValueIn(T arr[], const int n);
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);
template<typename T>
T MinValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>
T MinValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];

		}
	}
	return min;
}

#pragma once
#include"constants.h"
#include"stdafx.h"
#define EXTEM extern "C++" template<typename T> __declspec(dllexport)

EXTEM void Sort(T arr[], const int n);
EXTEM void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
EXTEM void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
EXTEM void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS;i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i;k < ROWS;k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					iterations++;
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Iterations: " << iterations << endl;
	cout << "Exchanges: " << exchanges << endl;
}


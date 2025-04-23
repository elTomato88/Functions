#pragma once
#include"stdafx.h"
#include"constants.h"

__declspec(dllexport) void Sort(int arr[], const int n);
__declspec(dllexport) void Sort(double arr[], const int n);
__declspec(dllexport) void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

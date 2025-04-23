#pragma once
#include"stdafx.h"
#include"constants.h"
__declspec(dllexport) void Print(int arr[], const int n);
__declspec(dllexport) void Print(double arr[], const int n);
__declspec(dllexport) void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);


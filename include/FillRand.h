#pragma once
#include<iostream>
#include"constants.h"
using namespace std;

void FillRand(int arr[], const int n);	//«аполн€ет массив случайными числами
void FillRand(double arr[], const int n);	//«аполн€ет массив случайными числами
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
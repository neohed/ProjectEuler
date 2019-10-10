// Euler_002.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	long first = 1;
	long second = 2;
	long third = 0;
	long total = 0;

	do
	{
		if (second % 2 == 0)
		{
			total += second;
		}
		third = second;
		second += first;
		first = third;
	} while (first < 4000000);
	
	Console::WriteLine(L"> " + total);
	Console::Read();
    return 0;
}

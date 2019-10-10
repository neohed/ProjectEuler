// Euler_001.cpp : main project file.

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	int counter3 = 3;
	int counter5 = 5;
	int total = 0;

	do
	{
		if (counter3 < counter5)
		{
			total += counter3;
			counter3 += 3;
		}
		else
		{
			if (counter3 != counter5)
				total += counter5;
			
			counter5 += 5;
		}
	} while (counter3 < 1000 || counter5 < 1000);

    Console::WriteLine(L"Total: " + total);
	Console::ReadLine();
    return 0;
}

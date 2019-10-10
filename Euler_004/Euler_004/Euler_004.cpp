// Euler_004.cpp : main project file.

/*
 *
 * Problem 4
 *
 * A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 *
 */

#include "stdafx.h"

using namespace System;

bool IsPalindrome(int test);

int main(array<System::String ^> ^args)
{
	int mult1 = 999, mult2 = 999;
	int bestPallySoFar = 0;

	do
	{
		int prod = mult1 * mult2;

		if (prod <= bestPallySoFar) // prod too small doesn't matter if it is a palindrome
		{
			mult1 = 999;
			mult2--;
		}
		else if (IsPalindrome(prod))
		{
			bestPallySoFar = prod;
			mult1 = 999;
			mult2--;
		}
		else
		{
			mult1--;
		}
	} while (mult2 * 999 > bestPallySoFar);
	
	Console::WriteLine(L"\n" + bestPallySoFar.ToString() + " is the largest palindrome.");

    Console::Read();
    return 0;
}

bool IsPalindrome(int test)
{
	String^ strrep = test.ToString();
	bool pally = true;
	for (int i=0; i < strrep->Length / 2; i++)
	{
		pally &= (strrep[i] == strrep[strrep->Length - i - 1]);
		if (!pally) break;
	}
	return pally;
}
//906609

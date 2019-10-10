#include <iostream>
#include <math.h>

/*
Problem 6

The sum of the squares of the first ten natural numbers is,
1^(2) + 2^(2) + ... + 10^(2) = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^(2) = 55^(2) = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
answer:

25164150

*/

int main()
{
	std::cout << "Starting calculation..." << std::endl;

	int exponent = 2;

	long double sumOfSquares = 0,
		squareOfSums = 0;

	for (long double i = 1; i <= 100; i++)
	{
		sumOfSquares += pow(i, exponent);
		squareOfSums += i;
	}
	
	squareOfSums = pow(squareOfSums, exponent);

	std::cout << "Sum of the squares: " << sumOfSquares << std::endl;
	std::cout << "Square of the sums: " << squareOfSums << std::endl;
	
	std::cout.setf(std::ios::fixed);
	std::cout << "Difference: " << (squareOfSums - sumOfSquares) << std::endl;

	return 0;
}
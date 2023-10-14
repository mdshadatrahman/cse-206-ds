#include <stdio.h>
int main()
{
	int array[20] = {1, 2, 3, 4, 6};
	int newLengthOfTheArray = 6;
	int elementToBeInserted = 5;
	int position = 4;

	for (int i = newLengthOfTheArray; i > position; i--)
	{
		array[i] = array[i - 1];
	}
	array[position] = elementToBeInserted;

	// Print
	for (int i = 0; i < newLengthOfTheArray; i++)
	{
		printf("%d\n", array[i]);
	}
}
#include <stdio.h>
int main()
{
	int array[100] = {1, 2, 3, 4, 5};
	int arrayLength = 5;
	int position, value;
	int guard;
pos:
	printf("Position: ");
	scanf("%d", &position);
	if (position > arrayLength + 1)
	{
		printf("Positioned can not be more than %d\n", arrayLength + 1);
		goto pos;
	}

	printf("Value: ");
	scanf("%d", &value);
	printf("The value must be an integer\n");

	printf("Old Array: ");
	for (int i = 0; i < arrayLength; i++)
	{
		printf("%d ", array[i]);
	}

	for (int i = arrayLength; i >= position; i--)
	{
		array[i] = array[i - 1];
	}
	array[position - 1] = value;

	printf("\nUpdated Array: ");
	for (int i = 0; i < arrayLength + 1; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
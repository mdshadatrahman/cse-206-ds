#include <iostream>
using namespace std;

int main()
{
	int array[100] = {1, 2, 3, 4, 5};
	int arrayLength = 5;
	int position, value;
	int guard;

pos:
	cout << "Position ";
	cin >> position;
	if (position > arrayLength + 1)
	{
		cout << "Positioned can not be more than " << arrayLength + 1 << endl;
		goto pos;
	}

	cout << "Value: ";
	cin >> value;

	cout << "Old array ";
	for (int i = 0; i < arrayLength; i++)
	{
		cout << array[i] << " ";
	}

	for (int i = arrayLength; i >= position; i--)
	{
		array[i] = array[i - 1];
	}
	array[position - 1] = value;

	cout << "\nUpdated Array ";
	for (int i = 0; i < arrayLength + 1; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}
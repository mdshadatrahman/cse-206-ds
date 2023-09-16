#include <iostream>
using namespace std;

void reachHome(int initialStep, int destination)
{
	cout << "Step " << initialStep << "Destination " << destination << endl;
	if (initialStep == destination)
	{
		cout << "Reached Home..." << endl;
		return;
	}

	initialStep++;
	reachHome(initialStep, destination);
}

int main()
{
	int destination = 10;
	int initialStep = 1;

	reachHome(initialStep, destination);

	return 0;
}


#include <iostream>

using namespace std;

int main() {

	int size;
	int A[100];

	cin >> size;

	for (int i = 0; i <= size - 1; i++)
	{
		cin >> A[i];
	}


	for (int i = size - 1; i >= 0; i--)
	{

		cout << A[i] << "\n";
	}

	return 0;
}


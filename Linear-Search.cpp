#include <iostream>
using namespace std;

void Linear_Search(int arr[], int val)
{
	for (int i = 0 ; i < 5 ; i++)
	{
		if (arr[i] == val)
		{
			cout << "Element Found :)" << endl;
		}

	}
	cout << "Element not found :(" << endl;
}

int main()
{
	int val;
	int arr[5];

	cout << "Enter the elements" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << "Enter the value" << endl;
	cin >> val;

	Linear_Search(arr, val);
	return 0;

}
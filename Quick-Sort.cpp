#include<iostream>

using namespace std;

int partition(int values[], int low, int high)
{
	int pivot = values[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (values[j] < pivot)
		{
			i++;
			swap(values[i], values[j]);
		}
	}
	swap(values[i + 1], values[high]);
	return i + 1;
}

void quick_sort(int values[], int first, int last)
{
	if (first < last)
	{
		int pi = partition(values, first, last);
		quick_sort(values, first, pi - 1);
		quick_sort(values, pi + 1, last);
	}
}

int main()
{
	int array[] = {1, 4, 2, 15, 11, 1999, 10, 10, 2003, 16};
	quick_sort(array, 0, 9);
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;
	return 0;
}
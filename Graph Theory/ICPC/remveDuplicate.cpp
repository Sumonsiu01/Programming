#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicate elements
void removeDuplicates(int arr[], int n)
{

	// Initialise a vector
	// to store the array values
	// and an iterator
	// to traverse this vector
	vector<int> v(arr, arr + n);
	vector<int>::iterator it;

	// using unique() method to remove duplicates
	it = unique(v.begin(), v.end());

	// resize the new vector
	v.resize(distance(v.begin(), it));

	// Print the array with duplicates removed
	cout << "\nAfter removing duplicates:\n";
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << ", ";
	cout << '\n';
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5, 5 };

	int n = sizeof(arr) / sizeof(arr[0]);

	// Print array
	cout << "\nBefore removing duplicates:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	// call removeDuplicates()
	removeDuplicates(arr, n);

	return 0;
}


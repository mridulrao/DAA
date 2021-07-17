#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout << "Enter the size of array" << endl;
	cin >> n;

	int arr[n];

	cout << "Enter the elements of array" << endl;
	for(int i = 0 ;i < n; i ++)
		cin >> arr[i];

	cout << "Enter element to be searched" << endl;

	int key;
	cin >> key;

	for(int i = 0 ;i < n; i++)
	{
		if(arr[i] == key)
		{
			cout << "Element found at " << i+1 << " position" << endl;
			return 0;
		}
	}

	cout << "Element could not be found" << endl;
	return 0;
}
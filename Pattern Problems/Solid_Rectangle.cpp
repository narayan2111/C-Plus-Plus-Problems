// C++ Program to Print Rectangle Pattern

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout<<"*";

		}cout<<endl;
	}
	return 0;
}

/*
Sample I/O:

Input: 5

output:
*****
*****
*****
*****
*****

Time Complexity:O(n*n)
Space Complexity:O(1)
*/
// C++ Program to Print Half Pyramid

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

/*
Sample I/O:
Input:
5
Output:
*
**
***
****
*****

Time Complexity:O(n*n)
Space Complexity:O(1)

*/
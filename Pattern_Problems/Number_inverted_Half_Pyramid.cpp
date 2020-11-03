// C++ Program to print numbers in inverted half Pyramid

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}cout<<endl;
	}
	return 0;
}

/*
Sample I/O:
Input:
5
Output:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Time Complexity: O(n*n)
Space Complexity:O(1)


*/
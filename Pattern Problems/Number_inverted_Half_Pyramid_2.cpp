// C++ Program to print numbers in inverted half Pyramid 2

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
			cout<<(n-i+1)<<" ";
		}cout<<endl;
	}
	return 0;
}

/*
Sample I/O:
Input:
5
Output:
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

Time Complexity: O(n*n)
Space Complexity:O(1)


*/
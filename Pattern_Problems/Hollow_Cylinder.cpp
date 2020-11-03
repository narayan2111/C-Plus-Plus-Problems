// C++ Program to print Hollow cylinder

#include<iostream>
using namespace std;

int main()
{
	int row, col;
	cin>>row>>col;

	for(int i=1; i<=row;i++)
	{
		for(int j=1;j<=col;j++)
		{
			if(i == 1 || i == row || j == 1 || j == col)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}cout<<endl;
	}
	return 0;
}

/*
Sample I/O:

Input:
5 4
Output:
****
*  *
*  *
*  *
****

Time Complexity: O(row*col)
Space Complexity:O(1)
*/
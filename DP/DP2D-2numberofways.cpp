#include <bits/stdc++.h>
using namespace std;
#define F(i,a,b) for(int i = (int)(a); i <= (int)(b); i++)
#define RF(i,a,b) for(int i = (int)(a); i >= (int)(b); i--)

int main()
{
	int X,Y;
	X = Y = 10;

	int numWays[X][Y];
	numWays[0][0] = 1;

	// initialize first row 
	F(j,1,Y-1)
		numWays[0][j] = 1;
	
	// initialize first column
	F(i,1,X-1)
		numWays[i][0] = 1;

	F(i,1,X-1)
	{
		F(j,1,Y-1)
		{
			numWays[i][j] = numWays[i-1][j] + numWays[i][j-1];
		}
	}

	cout<<"Number of ways from (0,0) to (X,Y) is"<<numWays[X-1][Y-1];
	return 0;
}
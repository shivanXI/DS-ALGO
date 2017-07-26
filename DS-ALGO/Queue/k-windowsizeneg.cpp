#include <bits/stdc++.h>

using namespace std;

void findFirstNegativeInteger(int array_l[], int n, int k)
{
	deque<int> ndeck;
	int i;
	for(i = 0; i < k; i++)
		if(array_l[i] < 0)
			ndeck.push_back(i);

	for( ; i<n; i++)
	{
		if(!ndeck.empty())
			cout << array_l[ndeck.front()] << " ";
		else
			cout << "0" << " ";
		while ( (!ndeck.empty() ) && ndeck.front() < (i - k + 1))
			ndeck.pop_front();
		if (array_l[i] < 0)
			ndeck.push_back(i);
	}


}
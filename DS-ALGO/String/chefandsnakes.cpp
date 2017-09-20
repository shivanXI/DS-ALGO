#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, i;
        char prev, next;
        string s;
        bool ans;
 
        cin >> t;
 
        while(t--)
            {
                ans=1;
 
                cin >> n >> s;
                next = 'H';
 
                for(i=0; i<n; i++)
                    {
                        if(s[i] != '.')
                            {
                                if(next == 'T' && s[i] == 'T')
                                    next = 'H';
                                else if (next == 'H' && s[i] == 'H')
                                    next = 'T';
                                else
                                    ans = 0;
                            }
                    }
 
                if(next == 'T')
                    ans=0;
               
                if(ans)
                    cout << "Valid" << endl;
                else
                    cout << "Invalid" << endl;
            }
 

	return 0;
}
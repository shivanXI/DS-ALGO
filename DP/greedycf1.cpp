#include <bits/stdc++.h>
using namespace std;
int count_query_val[100005];
set<int> query;
int main(){
	int Q;
	//vector<string> query;
	//ector<int> query_val;
	priority_queue<int> great;
	priority_queue<int, vector<int>, greater<int>> less;
	cin>>Q;
	while(Q--)
	{
		char str[100];
		scanf("%s", &str);
		if(strcmp(str, "Push") == 0)
		{
			int val;
			scanf("%d",&val);
			query.insert(val);
			count_query_val[val]++;
		}
		if(strcmp(str, "CountHigh") == 0)
		{
			while(!query.empty() && count_query_val[*query.rbegin()] == 0)
				query.erase(query.find(*query.rbegin()));
			if(!query.empty())
				printf("%d\n",count_query_val[*query.rbegin()] );
			else printf("-1\n");
		}
		if(strcmp(str, "CountLow") == 0)
		{
			while(!query.empty() && count_query_val[*query.begin()] == 0)
				query.erase(query.find(*query.begin()));
			if(!query.empty())
				printf("%d\n",count_query_val[*query.begin()] );
			else printf("-1\n");
		}
		if(strcmp(str, "Diff") == 0)
		{
			while(!query.empty() && count_query_val[*query.rbegin()] == 0)
				query.erase(query.find(*query.rbegin()));
			while(!query.empty() && count_query_val[*query.begin()] == 0)
				query.erase(query.find(*query.begin()));

			if(!query.empty())
			{
				if(*query.rbegin()!= *query.begin())
					count_query_val[*query.rbegin()]--;
				count_query_val[*query.begin()]--;
				printf("%d\n",*query.rbegin() - *query.begin());
			}else printf("-1\n" );
		}

	}
return 0;
}

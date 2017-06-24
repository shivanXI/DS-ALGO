#include <bits/stdc++.h>
using namespace std;
int p_array[100001], r_size[100001], hsh[100001], n;
set <int> s;
set <int> :: iterator ll;

int create_root(int camper){
	while(p_array[camper] != camper){
		p_array[camper] = p_array[p_array[camper]];
		camper = p_array[camper];
	}
	return camper;
}

void union_grp(int camper_1,int camper_2)
{
	int root_camper_1  = create_root(camper_1), root_camper_2 = create_root(camper_2),size_grp,i;
	int size_camper_1 =  r_size[root_camper_1], size_camper_2 = r_size[root_camper_2];

	if(root_camper_1 != root_camper_2){
		if(r_size[root_camper_1] < r_size[root_camper_2]){
			p_array[root_camper_1] = root_camper_2;
			r_size[root_camper_2] += r_size[root_camper_1];
			size_grp = r_size[root_camper_2];
		}else{
			p_array[root_camper_2] = root_camper_1;
			r_size[root_camper_1] += r_size[root_camper_2];
			size_grp = r_size[root_camper_1];	
		}
		hsh[size_camper_1]--;
		if(hsh[size_camper_1]==0)
			s.erase(size_camper_1);
		hsh[size_camper_2]--;
		if(hsh[size_camper_2]==0)
			s.erase(size_camper_2);
		hsh[size_grp]++;
		s.insert(size_grp);
	}
} 

int main()
{
	int i, q, camper_1,camper_2;
	for(i=1;i<100001;i++){
		p_array[i] = i;
		r_size[i] = 1;
		hsh[i] = 0;
	}
	cin>>n>>q;
	s.insert(1);
	for(i=1;i<=n;i++)
		hsh[r_size[i]]++;
	while(q--){
		cin>>camper_1>>camper_2;
		union_grp(camper_1, camper_2);
		ll = s.end();
		ll--;
		cout<<((*ll)-(*s.begin()))<<endl;
	}
	return 0;
}
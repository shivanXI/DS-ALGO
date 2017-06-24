#include <stdio.h>
#include <string.h>

#define MAX 100001
#define ILLEGAL -1
#define TRUE 1
#define FALSE 0

void init(int* p_array, int* r_size, int N){
	if(!p_array || !r_size ||(N <= 0)){
		return;
	}
	int i;
	for (i = 1;i <= N; ++i){
		p_array[i] = i;
		r_size[i] = 1;
	}

}

int create_root(int* p_array, int city, int N){
	if(!p_array || (city <= 0) || (city > N)){
		return(ILLEGAL);
	}

	while(city != p_array[city]){
			city = p_array[city];
	}

	return(city);
}

void union_of_city(int* p_array, int* r_size, int city_A, int city_B, int N){
		if(!p_array || !r_size || (N <= 0) || (city_A > N) || (city_B > N) || (city_A <= 0) || (city_B <= 0)){
			return;
		}

		int root_city_A = create_root(p_array,city_A,N);
		int root_city_B = create_root(p_array,city_B,N);

		if(r_size[root_city_A] > r_size[root_city_B]){
			p_array[root_city_B] = root_city_A;
			r_size[root_city_A] += r_size[root_city_B];
			r_size[root_city_B] = 0;
		}else{
			p_array[root_city_A] = root_city_B;
			r_size[root_city_B] += r_size[root_city_A];
			r_size[root_city_A] = 0;

		}
}

int main()
{
	int i, j, N, K, city_A, city_B;
	int p_array[MAX];
	int r_size[MAX];
	int max_distinct_grp;

	scanf("%d %d", &N, &K);

	init(p_array, r_size, N);

	for(i = 0; i < K; ++i){
		scanf("%d %d", &city_A, &city_B);
		union_of_city(p_array, r_size, city_A, city_B, N);
	}

	max_distinct_grp = 0;

	for(i = 1; i <= N; ++i){
		if(r_size[i]){
			++max_distinct_grp;
		}
	}

	printf("%d\n", max_distinct_grp);
	return 0;

}
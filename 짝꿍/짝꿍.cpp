#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	int N, M, x, y;
	
	scanf("%d", &N);
	scanf("%d", &M);
	vector<int> z[10000];

	for(int i = 0; i < M; i++){
		scanf("%d %d", &x, &y);
		z[x].push_back(y);
	}
	for(int i = 1; i <= N; i++){
		for(int j = 0; j < z[i].size(); j++){
			printf("%d ", z[i][j]);
		}
		if(z[i].size() == 0) printf("0");
		printf("\n");
	}
}

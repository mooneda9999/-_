#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	int N, x = 0, y, z;
	vector<int> v;
	scanf("%d", &N); 
	for(int i = 0; i < N; i++){
		scanf("%d", &y);
		v.push_back(y);
	}
	for(int j = 0; j < N - 1; j++){
		if(v[j] < v[j + 1]){
			if(x < v[j + 1] - v[j]){
				x = v[j + 1] - v[j];
				z = j;
			}
		}
	}
	printf("%d %d", z + 1, z + 2);
}

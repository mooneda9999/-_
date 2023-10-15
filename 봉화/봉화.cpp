#include <stdio.h>
#include <vector>
using namespace std;

int main(){
	int N, h;
	vector<int> v;
	scanf("%d", &N);
	
	for(int i = 0; i < N; i++){
		scanf("%d", &h);
		v.push_back(h);
	} 
	
	int C = 0;
	for(N; N > 0; N--){
		if(v[N - 1] < v[N - 2]){
			C += 1;	
		}
	}printf("%d", C);
}

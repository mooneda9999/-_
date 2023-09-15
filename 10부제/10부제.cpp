#include <stdio.h>

int main(){
	int N, x, y = 0;
	scanf("%d", &x);
	for(int i = 0; i < 5; i++){
		scanf("%d", &N);
		if(x == N) y++;
	}
	printf("%d", y);
}

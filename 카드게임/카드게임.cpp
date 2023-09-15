#include <stdio.h>

int main(){
	int A[10], B[10];
	int x, y, z;
	
	for(int i = 0; i < 10; i++){
		scanf("%d", &A[i]);
	}
	for(int j = 0; j < 10; j++){
		scanf("%d", &B[j]);
	}
	for(int k = 0; k < 10; k++){
		if(A[k] < B[k]){
			y++;
		} else if(A[k] > B[k]){
			x++;
		} else {
			z++;
		}
	}
	if(x == y){
		printf("D");
	} else if(x < y){
		printf("B");
	} else{
		printf("A");
	}
	
}

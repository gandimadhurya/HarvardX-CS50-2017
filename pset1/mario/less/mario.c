#include <stdio.h>
#include <iostream>

int main(void){
	int height;
	printf("Height: ");
	scanf("%d",&height);
	//mario mounting up
	height++;
	for(int i=2;i<=height;i++){
		for(int j=0;j<(height-i);j++){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf("#");
		}
		printf("\n");
	}
}


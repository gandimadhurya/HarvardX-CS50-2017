#include <stdio.h>
#include <iostream>

int main(void){
	int height;
	printf("Height: ");
	scanf("%d",&height);
	//mario mounting up
	for(int i=1;i<=height;i++){
		for(int j=0;j<(height-i);j++){
			printf(" ");
		}
		for(int k=0;k<i;k++){
			printf("#");
		}
		printf(" ");
		printf(" ");
		//mario coming down the stairs
		for(int l=0;l<i;l++){
			printf("#");
		}
		printf("\n");
	}
}


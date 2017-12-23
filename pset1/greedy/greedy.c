#include<stdio.h>
#include<iostream>

int main(void){
	float cents;
	int num=0,rem=0,answer=0,flag=1;	
	while(1){
		printf("Hey! How much change is owed?\n");
		scanf("%f",&cents);
		if(cents>0&&cents<1)
			break;	
	}
	num = cents*100;
	answer += num/25;
	num = num%25;
	answer += num/10;
	num = num%10;
	answer += num/5;
	num = num%5;
	answer += num;
	printf("%d\n",answer);
}


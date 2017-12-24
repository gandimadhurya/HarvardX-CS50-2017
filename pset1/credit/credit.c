#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>

bool checkNum(long long int card){
	int digitCount = 0;
	int rem,i=1, prod =1,beginNum=0;
	while(card>0){
		if(card<100 && card>9){
			beginNum = card;
		}
		if(i%2==0){
			prod += (card%10)*2;
		}
		else{
			prod += card%10;
		}
		card /= 10;
		digitCount++;
		i++;
	}
	if(prod%10==0){
		if(digitCount==16){
			if(beginNum==51||beginNum==52||beginNum==53||beginNum==54||beginNum==55){
				printf("Master\n");
				return 1;
			}
		}		

		else if(digitCount==13||digitCount==16){
			if((beginNum/10)==4){
				printf("Visa\n");
				return 1;
			}
		}
		else if(digitCount==15){
			if(beginNum==34||beginNum==37){
				printf("AmEx\n");
				return 1;
			}
		}
		else{
			printf("Invalid\n");
			return 0;
		}
	}
	return 0;
}


int main(void){
	//use a string as input
	long long int card;
	while(true){
		printf("Number: ");
		scanf("%lld",&card);
		if(checkNum(card)){
			break;
		}
	}
	return 0;	
}

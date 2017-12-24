#include<stdio.h>
#include<iostream>
#include<string.h>

int main(void){
	char s[100];
	gets(s);
	char res[50];
	int j=0;
	int n = strlen(s);
	for(int i=0;i<n;i++){
		if(i==0){
			res[j] = toupper(s[i]);
			j++;
		}
		if(s[i]==' '){
			res[j]	= toupper(s[i+1]);
			j++;
		}
	}
	printf("%s\n",res);
}

#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("enter a string \n");
	gets (str);
	for(int x=0;x<100;x++){
		if(str[x]>='A'&& str[x]<='Z'){
			printf("%c",str[x]+32);
		}
		printf("%c",str[x]);
	}
}
#include<stdio.h>

int main(){
	
	 char latters[10];
	 
	 for(int i=0; i<10; i++){
	 	scanf(" %c",&latters[i]);
	 }
	 
	 for(int i=0; i<10; i++){
	 	printf("%c ",latters[i]-32);
	 }
}
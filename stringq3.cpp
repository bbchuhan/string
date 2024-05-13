#include <stdio.h>    
#include <string.h>  
  
 
int main ()  
{  
    char str[100];  
      
    printf (" Enter the upper case string: ");  
    gets (str);  
      
       
    for(int i =0; i<10; i++){
    	printf("%c",str[i] -32);
	}
  

}  
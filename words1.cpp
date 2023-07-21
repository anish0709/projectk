#include<stdio.h>	
#include<string.h>
int main(){
	
	char c[10];
	int y;
	printf("Enter a new string");
	gets(c);
	for(y=0; y!=c.length(); y++){
		puts(c);
		if(c==' ')
		printf("\n");
	}
}

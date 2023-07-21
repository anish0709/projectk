#include<stdio.h>
#include<string.h>
int main(){
	char a[25], b[25], c[25];
	gets(a);
	gets(b);
	
	strlwr(a);
	strlwr(b);
	
	int k=strcmp(a,b);
	printf("%d\n", k);
	
	if(k==0)
		printf("a and b are equal\n");
	else
		printf("a and b are not equal\n");
}

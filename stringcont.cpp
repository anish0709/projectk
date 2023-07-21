#include<stdio.h>
#include<string.h>
int main(){
	
	char a[10], b[10], c[10];
	gets(a);
	gets(b);
	
	//strcat(a,b);
	//puts(a);
//	
//	int k=strlen(a);
//	printf("%d", k);
//	
//	strupr(a);
//	strupr(b);
//	puts(a);
//	puts(b);
//	
//	strlwr(a);
//  puts(a);
//	strlwr(b);
//	puts(b);

	int k=strcmp(a,b);
	printf("%d", k);
	
	if(k==0)
		printf("a and b are equal\n");
	else
		printf("a and b are not equal\n");
//	
//	strcpy(c,a);
//	puts(c);
//	
//	strrev(a);
//	puts(a);
}

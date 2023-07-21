#include<stdio.h>
#include<string.h>
int main(){
	
	char a[10], c[10];
	int b;
	
	gets(a);
	gets(c);
	for(b=0; a[b]!=NULL; b++){
		printf("%c", a[b]);
	}
	
	printf("\n");
	
	strupr(a);
	for(b=0; a[b]!=NULL; b++){
		printf("%c", a[b]);
	}
	
	printf("\n");
	
	strlwr(a);
	for(b=0; a[b]!=NULL; b++){
		printf("%c", a[b]);
	}
	
	printf("\n");
	
	strcat(a, c);
	for(b=0; a[b]!=NULL; b++){
		printf("%c", a[b]);
	}
	
	printf("\n");
	
	strcpy(a,c);
	for(b=0; a[b]!=NULL; b++){
		printf("%c", a[b]);
	}
	
	int k=strcmp(a,b);
	printf("%d", k);
	
	if(k==0)
		printf("a and b are equal\n");
	else
		printf("a and b are not equal\n");
	
}

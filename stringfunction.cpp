#include<stdio.h>
#include<string.h>
void string1(char a[10], char b[10])
{
	int y;
	char c[10];
	gets(a);
	gets(b);
	for(y=0; a[y]!=NULL; y++){
		printf("%c", a[y]);
	}
	
	printf("\n");
	
	strupr(a);
	for(y=0; a[y]!=NULL; y++){
		printf("%c", a[y]);
	}
	
	printf("\n");
	
	strlwr(a);
	for(y=0; a[y]!=NULL; y++){
		printf("%c", a[y]);
	}
	
	printf("\n");
	
	strcat(a, c);
	for(y=0; a[y]!=NULL; y++){
		printf("%c", a[y]);
	}
	
	printf("\n");
	
	strcpy(a,c);
	for(y=0; a[y]!=NULL; y++){
		printf("%c", a[y]);
	}
	
	int k=strcmp(a,b);
	printf("%d", k);
	
	if(k==0)
		printf("a and b are equal\n");
	else
		printf("a and b are not equal\n");
	
}
int main(){
   char x[10];
   char y[10];
   string1(x, y);
}

//8384048919

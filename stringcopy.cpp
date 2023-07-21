#include<stdio.h>
int main(){
	char s[20], s1[20];
	printf("Enter the characters");
	gets(s);
	for(int y=0; s[y]!=NULL; y++){
		s1[y]=s[y];
	}
	s1[y]='\0';
	puts(s1);
}

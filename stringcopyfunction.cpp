#include<stdio.h>
void stringcopy(char s2[20], char s3[20]){
	int y;
	for(y=0; s2[y]!=NULL; y++){
		s3[y]=s2[y];
	}
	s3[y]='\0';
}

int main(){
	char s[20], s1[20];
	printf("Enter the characters");
	gets(s);
	stringcopy(s,s1);
	puts(s);
}

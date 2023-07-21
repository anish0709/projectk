#include<stdio.h>
int main(){
	char s[5];
	gets(s);
	for(int y=5; y!=0; y--)
	{
		printf("%c", s[y]);
	}
}

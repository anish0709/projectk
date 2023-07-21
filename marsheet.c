#include<stdio.h>
#include<>
int main(){
	int t,e,y,c,a;
	float w, z;
	string s;
	printf("Enter your name");
	scanf("%s", &s);
	printf("enter the numbers of 5 subjects out of 100\n");
	scanf("%d %d %d %d %d", &t, &e, &y, &c, &a);
	z=t+e+y+c+a;
	w=(z*100)/500;
	printf("%f", w);
}

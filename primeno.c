#include<stdio.h>
int main(){
	int e, y, t, count=0;
	printf("Enter the number : ");
	scanf("%d", &y);
		for(e=1; e<y; e++){
		if(y%e!=0)
		count++;
		else
		continue;
	}
		if(count==2)
		printf("prime number found");
		else
		printf("not found");	
}

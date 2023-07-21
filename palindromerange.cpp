#include<stdio.h>
int main(){

for(int k=1; k<100; k++){
	int e, t=0, y, n;
	n=k;
	int c=n;
	while(n>0){
		y=n%10;
		n=n/10;
		t=t*10+y;
	}
	if(c==t){
		printf("palindrome\n");
	}
	else{
		printf("not found\n");
	}
  }
}

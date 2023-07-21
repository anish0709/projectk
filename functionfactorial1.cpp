#include<stdio.h>
int fact(int n){
	int factorial=1;
	factorial=factorial * fact(n-1);
	return factorial;
}
int main(){
	int y;
    y=fact(5);
    printf("The value is %d", y);
}

#include<stdio.h>
int function(int a, int b){
	 printf("The value is %d\n", a+b);
	 printf("The value is %d\n", a-b);
	 printf("The value is %d\n", a*b);
	 printf("The value is %d", a/b);
}
int main(){
    function(5, 4);
}

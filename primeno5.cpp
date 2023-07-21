#include<iostream>
using namespace std;
class primeno{
    int e, y, t, count=0;
    void input(){
        cout<<"enter the number";
        cin>>y;
    }
    
    void process(){
        for(e=1; e<y; e++){
		if(y%e!=0)
		count++;
		else
		continue;
        }
    }

    void output(){
        if(count==2)
		printf("prime number found");
		else
		printf("not found");
    }
};

void main(){
    primeno object;
    object.input();
    object.process();
    object.output();
}
#include<iostream>
using namespace std;
class primeno{
    int e, y, t, count;
    public:
    void input(){
        cout<<"enter the number";
        cin>>y;
    }
    
    void process(){
    	count=0;
        for(e=1; e<=y; e++){
		if(y%e!=0)
		count++;
        }
    }

    void output(){
        if(count==2)
		printf("prime number found");
		else
		printf("not found");
    }
};

int main(){
	
    primeno object;
    object.input();
    object.process();
    object.output();
    return 0;
}

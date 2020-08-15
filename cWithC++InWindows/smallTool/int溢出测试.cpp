#include <iostream>
using namespace std;


void addition(int a,int b){//overflow return 1,else return 0
	int temp = a + b ; 
	if (((a ^ temp) & (b ^ temp)) < 0) {
		cout<<"integer overflow!"<<endl;
		//return 0;
    }
    else{
    	cout<<"everything will be ok!"<<endl;
    	//return a + b ;
	}
}

int main(){
	int a=100,b=100;
	addition(a,b);
	//cout<<addition(a,b);
	return 0;
} 

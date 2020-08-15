#include <iostream>
using namespace std;

int main(){
	enum number{zero,one,two,three};
	
	int a = 0;
	if(zero==a){
		cout<<"enum can compare with int";
	}
	cout<<endl;
	if(one==1){
		cout<<"enum can compare with 1";
	}
	
	cout<<endl;
	system("pause");
	return 1;
} 
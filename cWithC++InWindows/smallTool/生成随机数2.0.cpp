#include <iostream> 
#include <random>//std::random_device rd//c++11带来的随机数生成器
using namespace std;

int main(){
	cout<<"input 1 will get a random number"<<endl; 	
	cout<<"input 0 will stop get a random number"<<endl; 
	
	random_device rd;
	int i=1;
	while(i){
		cout<<rd()<<endl;//记得用rd()来产生一个随机数 
		cin>>i;
	}
	
	cout<<endl;
	system("pause");
	return 1;
} 

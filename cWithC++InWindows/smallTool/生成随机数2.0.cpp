#include <iostream> 
#include <random>//std::random_device rd//c++11�����������������
using namespace std;

int main(){
	cout<<"input 1 will get a random number"<<endl; 	
	cout<<"input 0 will stop get a random number"<<endl; 
	
	random_device rd;
	int i=1;
	while(i){
		cout<<rd()<<endl;//�ǵ���rd()������һ������� 
		cin>>i;
	}
	
	cout<<endl;
	system("pause");
	return 1;
} 

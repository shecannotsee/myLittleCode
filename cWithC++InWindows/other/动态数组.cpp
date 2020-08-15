#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	//Creating a dynamic array
	int* p=new int(n);
	for(int i=0;i<n;++i){
		*(p+i)=i;
	} 
	for(int i=0;i<n;++i){
		cout<<*(p+i)<<endl;
	} 
	
	//delete
	delete []p;
	p=nullptr;
	//delete over
	system("pause"); 
	return 0;
} 
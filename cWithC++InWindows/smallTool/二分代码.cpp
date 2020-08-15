#include <iostream>
using namespace std;
void cut(){
	cout<<"you will cut the number"<<endl;
	int n;
	cin>>n;
	for(int i=0;n>=1;++i){
		cout<<n<<endl;
		n/=2;
	};
}
int main(){
	int flag=1;
	while(flag){
		cut();
		cout<<"close input 0,other input 1"<<endl;
		cin>>flag;
	}
	
	system("pause");
	return 0;
} 

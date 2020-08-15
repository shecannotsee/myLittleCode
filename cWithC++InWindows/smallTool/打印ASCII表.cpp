#include <iostream>
using namespace std;
int main(){
	for(int n=0;n<150;++n){
		if(n%5==0&&n!=0){cout<<endl;}
		cout<<n<<"is="<<(char)n<<"\t";
	}
	
	cout<<endl;
	system("pause");
	return 0; 
}

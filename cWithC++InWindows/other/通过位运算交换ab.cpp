#include <iostream>
using namespace std;

int main(){
	int a=100;
	int b=200;
	a=a^b;
	b=b^a;
	a=a^b;
	cout<<a<<" "<<b;
	
	cout<<endl;
	system("pause");
	return 1;
} 
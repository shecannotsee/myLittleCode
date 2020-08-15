#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> temp{1,2,3,4,5};
	cout<<(*++temp.begin());
	cout<<(*++++temp.begin());
	
	cout<<endl;
	system("pause");
	return 1;
} 

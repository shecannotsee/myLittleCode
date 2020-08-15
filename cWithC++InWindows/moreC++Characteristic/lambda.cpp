/*
就地定义匿名函数，不再需要定义函数对象
*/
#include <iostream>
using namespace std;

int main(){
	int a = 123;
	auto f = [=,&a](){
		cout<<++a<<endl;
	};
	f();

	cout << a << endl; 
	system("pause");
	return 0;
} 
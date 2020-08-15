#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a(10,0);//定义十个初值为0的向量
	vector<int> b(a);//用a创建b，整体赋值
	
	cout<<a[0]; 
	return 0;
} 

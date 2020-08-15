#include <iostream>
#include <array>//数组模板array<T,N>，长度不可变，安全性比普通数组更高（比如越界检测）

using namespace std;

int main(){
	
	array<double,100> a0;//100个double，未初始化，值随机 
	cout<<a0[2]<<endl; 
	
	array<int,100> a1 {};//100个int，初始化为0 
	cout<<a1[2]<<endl;
	
	array<int,100> a2 {1,2,3};//100个int，初始化前三个为1，2，3，之后的都为0
	cout<<a2[0]<<" "<<a2[1]<<" "<<a2[2]<<" "<<a2[3]<<" "<<a2[4]<<" "<<a2[5]<<endl;
	cout<<a2[100]<<endl; 
	//通过get<N>(array)获取array的第N个元素（N从0开始） 
	cout<<get<99>(a2)<<endl;//N==100会报错 
	cout<<a2[100]<<endl; //N==100 不会报错，显然get更安全 
	
	a2.fill(29);//通过fill将a2所有的值设为29
	cout<<a2[0]<<" "<<a2[1]<<" "<<a2[2]<<" "<<a2[3]<<" "<<a2[4]<<" "<<a2[5]<<endl;
	
	cout<<endl;
	system("pause");
	return 1;
} 
#include <iostream>
#include <array>//����ģ��array<T,N>�����Ȳ��ɱ䣬��ȫ�Ա���ͨ������ߣ�����Խ���⣩

using namespace std;

int main(){
	
	array<double,100> a0;//100��double��δ��ʼ����ֵ��� 
	cout<<a0[2]<<endl; 
	
	array<int,100> a1 {};//100��int����ʼ��Ϊ0 
	cout<<a1[2]<<endl;
	
	array<int,100> a2 {1,2,3};//100��int����ʼ��ǰ����Ϊ1��2��3��֮��Ķ�Ϊ0
	cout<<a2[0]<<" "<<a2[1]<<" "<<a2[2]<<" "<<a2[3]<<" "<<a2[4]<<" "<<a2[5]<<endl;
	cout<<a2[100]<<endl; 
	//ͨ��get<N>(array)��ȡarray�ĵ�N��Ԫ�أ�N��0��ʼ�� 
	cout<<get<99>(a2)<<endl;//N==100�ᱨ�� 
	cout<<a2[100]<<endl; //N==100 ���ᱨ����Ȼget����ȫ 
	
	a2.fill(29);//ͨ��fill��a2���е�ֵ��Ϊ29
	cout<<a2[0]<<" "<<a2[1]<<" "<<a2[2]<<" "<<a2[3]<<" "<<a2[4]<<" "<<a2[5]<<endl;
	
	cout<<endl;
	system("pause");
	return 1;
} 
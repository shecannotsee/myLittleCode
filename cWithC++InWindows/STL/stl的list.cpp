#include <iostream>
#include <list>//˫����������list 
using namespace std;

int main(){
	list<int> L0;//����һ��������
	list<int> L1(9);//����һ��9��Ԫ�ص�����ÿ��Ԫ�ض���0
	list<int> L2(5,1);//����һ��5��Ԫ�ص�����ÿ��Ԫ�ض���1
	list<int> L3(L2);//����һ��L2��copy����
	list<int> L4{12,23,36,9999,41,54,66,79,84,92,9999,9999};//ʹ�ô��ֳ�ʼ����ʽ��Ҫ�ڱ���ʱ����������-std=c++11
	list<int> L5(4000,1);//�ڴ治���Ļ�4000�������ȡСһ�� 
	
	//ͨ��.size()ȡ˫������Ľڵ��� 
	cout<<"use .size() to get L5' node number "<<L5.size()<<endl; 
	
	//.begin()��.end()��ͷβָ�� 
	cout<<*L4.begin()<<endl;//ȡL4�ĵ�һ���ڵ� �����飨����ʵ�����������±���0�� 
	cout<<*++L4.begin()<<endl;//ȡL4�ĵڶ����ڵ� �����飨����ʵ�����������±���1��
	//.front()��.back()��ͷβָ���ֵ 
	cout<<L4.front()<<endl;
	cout<<L4.back()<<endl; 
	//.size()���������С
	cout<<"L2's node number is "<<L2.size()<<endl; 
	
	//����һ������ȡ�� 
	cout<<* ++ ++ ++ ++ ++ ++ ++ ++ ++
	/*���ٸ�++*/
			L5.begin()<<"=====L5"<<endl;
	
	auto flag=L4.begin();
	for(int n=0;n<5;++flag,++n)cout<<*flag<<" ";//����ǰn�� 
	cout<<endl;
	
	auto flag1=L4.begin();
	for(;flag1!=L4.end();++flag1)cout<<&flag1<<" ";//ָ���ַ���� 
	cout<<endl;
	
	auto flag2=L4.begin();
	for(;flag2!=L4.end();++flag2)cout<<*flag2<<" ";//����list��ֵ
	cout<<endl;
	
	auto flag3=L4.begin();
	for(;flag3!=L4.end();++flag3)cout<<&*flag3<<" ";//����ÿ��ֵ�ĵ�ַ 
	
	cout<<endl;
	system("pause");
	return 0;
}

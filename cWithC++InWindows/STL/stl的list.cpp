#include <iostream>
#include <list>//双向链表容器list 
using namespace std;

int main(){
	list<int> L0;//声明一个空链表
	list<int> L1(9);//声明一个9个元素的链表，每个元素都是0
	list<int> L2(5,1);//声明一个5个元素的链表，每个元素都是1
	list<int> L3(L2);//声明一个L2的copy链表
	list<int> L4{12,23,36,9999,41,54,66,79,84,92,9999,9999};//使用此种初始化方式需要在编译时添加以下命令：-std=c++11
	list<int> L5(4000,1);//内存不够的话4000可以相对取小一点 
	
	//通过.size()取双向链表的节点数 
	cout<<"use .size() to get L5' node number "<<L5.size()<<endl; 
	
	//.begin()和.end()是头尾指针 
	cout<<*L4.begin()<<endl;//取L4的第一个节点 （数组（这里实际是链表）里下标是0） 
	cout<<*++L4.begin()<<endl;//取L4的第二个节点 （数组（这里实际是链表）里下标是1）
	//.front()和.back()是头尾指针的值 
	cout<<L4.front()<<endl;
	cout<<L4.back()<<endl; 
	//.size()返回链表大小
	cout<<"L2's node number is "<<L2.size()<<endl; 
	
	//感受一下这种取法 
	cout<<* ++ ++ ++ ++ ++ ++ ++ ++ ++
	/*几百个++*/
			L5.begin()<<"=====L5"<<endl;
	
	auto flag=L4.begin();
	for(int n=0;n<5;++flag,++n)cout<<*flag<<" ";//遍历前n个 
	cout<<endl;
	
	auto flag1=L4.begin();
	for(;flag1!=L4.end();++flag1)cout<<&flag1<<" ";//指针地址不变 
	cout<<endl;
	
	auto flag2=L4.begin();
	for(;flag2!=L4.end();++flag2)cout<<*flag2<<" ";//遍历list的值
	cout<<endl;
	
	auto flag3=L4.begin();
	for(;flag3!=L4.end();++flag3)cout<<&*flag3<<" ";//链表每个值的地址 
	
	cout<<endl;
	system("pause");
	return 0;
}

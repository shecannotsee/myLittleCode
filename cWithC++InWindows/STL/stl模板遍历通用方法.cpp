#include <iostream>
#include <stdio.h> 
#include <list>
#include <vector> 
using namespace std;

typedef struct{
	int index;
	int val;
}DAT;

int main(){
	//����˫����Ľڵ����� 
	list<DAT> mylist;
	DAT node1,node2,node3;
	node1.index=1;node1.val=15649;
	node2.index=2;node2.val=45689;
	node3.index=3;node3.val=46899;
	mylist.push_back(node1);
	mylist.push_back(node2);
	mylist.push_back(node3);
	//������� 
	list<DAT>::iterator it0;//����list��Ӧ��ָ�� 
 	for(it0=mylist.begin();it0!=mylist.end();it0++)
 	{
  		DAT tem = *it0;
		printf("rr = %d \n",tem.val);
 	}
 	
 	//��������������
 	vector<DAT> myvector;
	DAT array1,array2,array3;
	array1.index=1;array1.val=154148;
	array2.index=2;array2.val=154128;
 	array3.index=3;array3.val=213128;
 	myvector.push_back(array1);
 	myvector.push_back(array2);
 	myvector.push_back(array3);
 	//�������
 	vector<DAT>::iterator it1;//����list��Ӧ��ָ�� 
 	for(it1=myvector.begin();it1!=myvector.end();it1++)
 	{
  		DAT tem = *it1;
		printf("rr = %d \n",tem.val);
 	}
 	
 	cout<<endl;
  	system("pause");
  	return 0;
}

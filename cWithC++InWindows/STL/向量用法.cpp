#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> a(10,0);//����ʮ����ֵΪ0������
	vector<int> b(a);//��a����b�����帳ֵ
	
	cout<<a[0]; 
	return 0;
} 

#include <iostream>
using namespace std;

int main(){
	do{
		cout<<"bool       ���ֽ�"<<sizeof(bool)<<endl
			<<"char       ���ֽ�"<<sizeof(char)<<endl
			<<"short      ���ֽ�"<<sizeof(short)<<endl
			<<"int        ���ֽ�"<<sizeof(int)<<endl
			<<"long       ���ֽ�"<<sizeof(long)<<endl
			<<"long long  ���ֽ�"<<sizeof(long long)<<endl
			<<"float      ���ֽ�"<<sizeof(float)<<endl
			<<"double     ���ֽ�"<<sizeof(double)<<endl
			<<"long double���ֽ�"<<sizeof(long double)<<endl
			<<"bool       �ı���ָ��"<<sizeof(bool*)<<endl
			<<"char       �ı���ָ��"<<sizeof(char*)<<endl
			<<"short      �ı���ָ��"<<sizeof(short*)<<endl
			<<"int        �ı���ָ��"<<sizeof(int*)<<endl
			<<"long       �ı���ָ��"<<sizeof(long*)<<endl
			<<"long long  �ı���ָ��"<<sizeof(long long*)<<endl
			<<"float      �ı���ָ��"<<sizeof(float*)<<endl
			<<"double     �ı���ָ��"<<sizeof(double*)<<endl
			<<"long double�ı���ָ��"<<sizeof(long double*)<<endl;
			
	}while(0); 
	system("pause"); 
	return 0;
} 

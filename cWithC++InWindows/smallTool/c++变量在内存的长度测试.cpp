#include <iostream>
using namespace std;

int main(){
	do{
		cout<<"bool       的字节"<<sizeof(bool)<<endl
			<<"char       的字节"<<sizeof(char)<<endl
			<<"short      的字节"<<sizeof(short)<<endl
			<<"int        的字节"<<sizeof(int)<<endl
			<<"long       的字节"<<sizeof(long)<<endl
			<<"long long  的字节"<<sizeof(long long)<<endl
			<<"float      的字节"<<sizeof(float)<<endl
			<<"double     的字节"<<sizeof(double)<<endl
			<<"long double的字节"<<sizeof(long double)<<endl
			<<"bool       的变量指针"<<sizeof(bool*)<<endl
			<<"char       的变量指针"<<sizeof(char*)<<endl
			<<"short      的变量指针"<<sizeof(short*)<<endl
			<<"int        的变量指针"<<sizeof(int*)<<endl
			<<"long       的变量指针"<<sizeof(long*)<<endl
			<<"long long  的变量指针"<<sizeof(long long*)<<endl
			<<"float      的变量指针"<<sizeof(float*)<<endl
			<<"double     的变量指针"<<sizeof(double*)<<endl
			<<"long double的变量指针"<<sizeof(long double*)<<endl;
			
	}while(0); 
	system("pause"); 
	return 0;
} 

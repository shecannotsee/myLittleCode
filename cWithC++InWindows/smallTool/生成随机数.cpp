#include <iostream>
#include <stdlib.h>// rand()����һ��0-32767֮���һ��α�������
#include <time.h>//time(NULL)���ݵ�ǰϵͳʱ��������һ����ֵ
#include <stdio.h>

void a(){
	srand((unsigned) time(NULL));//�������� 
	int n=rand();int m=rand();
	if(n>m){
		m=n+m;
		n=m-n;
		m=m-n;
	}
	std::cout<<"The range is"<<n<<"~"<<m<<std::endl;
    int a=rand()%(n-m+1)+m;
	std::cout<<a%1000;
	
	std::cout<<std::endl; 
} 
int main(){
	int flag=1;
	std::cout<<"input 1 will get a random number"<<std::endl; 
	std::cout<<"input 0 will stop get a random number"<<std::endl; 
	while(flag){
		a();
		std::cin>>flag;
	} 
	system("pause");
	return 0;
} 

#include <iostream>
#include <stdlib.h>// rand()返回一个0-32767之间的一个伪随机整数
#include <time.h>//time(NULL)根据当前系统时间来产生一个数值
#include <stdio.h>

void a(){
	srand((unsigned) time(NULL));//设置种子 
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

#include <iostream>
#include <time.h>
#include <random>//std::random_device rd//c++11带来的随机数生成器
#include <algorithm>//std::sort; 
#define MAX 100
using namespace std;
int temp[MAX];

int main(){
	random_device rd;
	for(int i=0;i<MAX;++i){	temp[i]=rd();}
	//for(int i=0;i<MAX;++i){ cout<<temp[i]<<endl;}//展示随机生成的数组 
	
	//查找第二大
	int max=temp[0],sec=temp[0];
	for(int i=1;i<MAX;++i){
		if(temp[i]>max){
			if(max!=sec){
				sec=max;
			}
			max=temp[i];
		}
		if(max==sec){
			sec=temp[i];
		}
		if(temp[i]<max &&temp[i]>sec){
			sec=temp[i];
		}
	}
	
	cout<<"second is "<<sec<<endl; 
	sort(temp,temp+MAX);
	for(int i=0;i<MAX;++i){ if(i>(MAX-10))cout<<temp[i]<<endl;};
	 
	
	cout<<endl;
	system("pause");
	return 1;
} 
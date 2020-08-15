#include <iostream>
#include <algorithm>//std::random_shuffle(arr,arr+N)，N是对数组N位打乱
#define NUM 100
#define N 100
using namespace std;

int main(){
	int temp[NUM];
	for(int i=0;i<NUM;++i){
		temp[i]=i+1;
	}
	//随机打乱前N位
	random_shuffle(temp,temp+N);
	
	for(int i=0;i<NUM;++i){
		cout<<temp[i]<<"\t";
	} 
	
	cout<<endl;
	system("pause");
	return 1;
} 

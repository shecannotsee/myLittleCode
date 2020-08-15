#include <iostream> 
#include <random>//std::random_device rd//c++11带来的随机数生成器
using namespace std;

int main(){
	int temp[10]={0};//用来统计出现次数 
	random_device rd;
	for(int i=0;i<100;i++){
		int a=rd()%10;
		switch(a){
			case 0:	temp[0]++;break;
			case 1:	temp[1]++;break;
			case 2:	temp[2]++;break;
			case 3:	temp[3]++;break;
			case 4:	temp[4]++;break;
			case 5:	temp[5]++;break;
			case 6:	temp[6]++;break;
			case 7:	temp[7]++;break;
			case 8:	temp[8]++;break;
			case 9:	temp[9]++;break;
			default: break;
		}
	}
	
	for(int i=0;i<10;i++){
		cout<<i+1<<"show times is"<<temp[i]<<endl; 
	}
	
	cout<<endl;
	system("pause");
	return 1;
}

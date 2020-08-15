//线性同余法 
#include <iostream>
#define MAXTIME (1000)
using namespace std;

int main(){
	double a=213,c=468,m=71;
	double x1=21213;
	double i=0;double temp;
	int test[10]; 
	while(i<MAXTIME){
		//cout<<int(x1/m *100)<<endl;
		test[int(x1/m *100) %10]++;
		temp = (int)(a*x1+c)% (int)m;
		x1=temp;
		i++;
	}
	
	for(int j=0;j<10;j++){
		cout<<j+1<<"turn on"
			<<test[j]<<"\t and probability is"
			<<(double)test[j]/(double)MAXTIME<<endl;
	}
	
	system("pause");
	return 0;
} 

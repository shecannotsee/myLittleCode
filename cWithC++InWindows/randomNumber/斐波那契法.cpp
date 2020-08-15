#include <iostream>
using namespace std;

int main(){
	double x1=6464,x2=2131,m=6784,temp,i=0;
	while(i<20){
		cout<<int(x1/m*100)<<endl;
		temp = x2;
		x2 = (int)(x1+x2)%(int)m;
		x1 = temp;
		i++;
	}
	
	system("pause");
	return 0;
} 

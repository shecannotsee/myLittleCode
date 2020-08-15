#include <iostream>
using namespace std;

int in_function(const char* buf){
	int sum = 0;
	while(*buf!=0){
		sum<<=1;
		sum+=*buf-'0';
		buf++;
	}
	return sum;
}

int main(){
	const char* a ="1011110101011010010101";
	
	cout << in_function(a) << endl;
	
	return 0;
}
 

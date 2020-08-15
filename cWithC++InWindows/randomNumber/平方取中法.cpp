#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
using namespace std;
int main(){
	
	int len = 0;
	int position = 2;
	int number = 7548;
	int temp = number * number ;
	while(temp>0){
		len = len + 1;
		temp = temp /10;
	}
	
	cout<<len;
	
	cout<<endl;
#ifdef _WIN32
	system("pause");
#endif
	return 0;
} 

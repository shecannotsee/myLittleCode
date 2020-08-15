#include <iostream>
using namespace std;
//unsigned int占32位
 
unsigned int f ( unsigned int a , unsigned int b ) {
	unsigned int result = 0 ;
	for( unsigned int i=0,flag=0;i<32;++i ){
		if( a<<(32-i) & b<<(32-i) ){//如果是1和1，需要对下一位+1 
			flag = 1; 
		}
		if(flag){//需要进位 
			result = result<<i ;
		}

	}
	
	return result ;
}

int main(){
	unsigned int a,b;
	cin >> a >> b  ;
	
	cout << f(a,b) ;
	
	system ( "pause" ) ;
	return 1;
} 
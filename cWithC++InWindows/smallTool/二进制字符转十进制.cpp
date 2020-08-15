#include <iostream>
#include <string>
using namespace std;
int main(){
	string str = "1011110101011010010101";
	int a = 0 ;
	int temp = 0;
	for( int i=0 ; i<str.size() ; i++ ){
		if( str[i]=='1' ){
			temp = 0 ;
			for( int j=0 ; j<(str.size()-i) ; j++){
				if( j==0 ){
					temp = 1 ;
				}
				else{
					temp = temp * 2 ;
				}
			}
			a = a + temp ;
		}
	}
	cout << str <<"(2)=" << a << "(10)" <<endl;
	return 0;
}

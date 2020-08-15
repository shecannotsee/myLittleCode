#include <iostream>

using namespace std;
//  n/3...2 && n/5..3 && n/7..2
int main(){
	
	for(int i=1;i<=500;++i){
		
		if( (i%3==2) && (i%5==3) && (i%7==2) 
			){
			cout<<i<<endl;
		}
	}
	
	system("pause");
	return 0;
} 
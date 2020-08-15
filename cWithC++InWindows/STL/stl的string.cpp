#include <iostream>
#include <string>
using namespace std; 

int main(){
	
	string s0 = "" ;
	//ÅÐ¶Ïs0ÊÇ·ñÎª¿Õ´® 
	if( s0.empty() ){
		cout<<"s0 is empty."<<endl;
	}
	else{
		cout<<"s0 is't empty."<<endl;
	}
	
	string s1 = "123" ;
	cout<<"s1's size is "<<s1.size()<<endl;
	s1.pop_back(); 
	s1 += "2";
	s1.pop_back(); 
	cout<<"s1's size is "<<s1.size()<<endl;
	
	 
	cout<<endl;
	system("pause");
	return 1;
}

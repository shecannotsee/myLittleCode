//a-97,z-122,25
#include <iostream>
#include <random>
#include <string>
using namespace std;
int main(){
	random_device rd;
	string a;
	for(int i=0;i<rd()%100;i++){
		a = a + (char) ((rd()%26)+97);
	}
	
	cout<<a;
	
}

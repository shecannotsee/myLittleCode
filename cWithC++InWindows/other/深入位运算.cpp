#include <iostream>
#define cep 1023
using namespace std;


int toB(int dec){
	int result = 0, temp = dec, j = 1;
	while(temp){
		result = result + j * (temp % 2);
		temp = temp / 2;
		j = j * 10;
	}
	return result;
}

int main(){
	int n = cep -1;
	cout<<"original n is"<<n<<endl;
	n = n | n>>1;
	cout<<n<<"'s binary number is'"<<toB(n)<<endl;
	n = n | n>>2;
	cout<<n<<"'s binary number is'"<<toB(n)<<endl;
	n = n | n>>4;
	cout<<n<<"'s binary number is'"<<toB(n)<<endl;
	n = n | n>>8;
	cout<<n<<"'s binary number is'"<<toB(n)<<endl;
	n = n | n>>16;
	cout<<n<<"'s binary number is'"<<toB(n)<<endl;
	
	cout<<endl;
	system("pause");
	return 1;
}
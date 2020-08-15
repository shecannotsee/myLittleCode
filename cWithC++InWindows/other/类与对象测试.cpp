#include <iostream>

using namespace std;

class testModel{
	private:
		//testModel();
		int a=0;
	public:
		//~testModel();
		
};


int main(){
	testModel modelA;
	testModel* p=&modelA;
	return 0;
} 
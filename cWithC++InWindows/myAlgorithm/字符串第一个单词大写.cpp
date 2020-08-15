/*A-65,Z-90，a-97，z-122，相差32*/ 
#include <iostream>
#include <string>
using namespace std;

void aToA(string &a){
	for(int i=0;i<a.size();i++){
		if(i == 0){
			if(a[i]>=97){a[i] -= 32;}
		}
		else if(a[i-1]==32||a[i-1]==64){
			if(a[i]>=97){a[i] -= 32;}
		} 
		
		if(i!=0 && a[i-1]!=32){
			if(a[i]<=90){a[i]+=32;}
		}
		if(i!=0 && (a[i-1]==32||a[i-1]==64)){
			if(a[i]>=97){a[i] -=32;}
		}
	}
	
	for(int i=0;i<a.size();i++){
		if(a[i]==64){a[i]-=32;}
	}
}

int main(){
	//string a = "sada adas dg fg b yuvbt vyrtvBFYUS SIDN NUISND UINAFUE ANUI";
	string a="   das sad asdas asd sa   das         sadads  "; 
	int num=0,flag=0;
	for(int i=0;i<a.size();i++){
		if(i==0&&a[i]==32) num--;
		
		if(a[i]==32) {num++;flag==1;}
		
		if(i!=0&&a[i]==32&&a[i-1]==32) num--;
		
	}
	if(num!=0|| !flag)num++;
	if(a[a.size()-1]==32) num--;
	
	aToA(a);//单词首字母大写，并且后续字母小写 
	
	cout<<a<<endl;
	cout<<"The number of words is "<<num;
	cout<<endl; 
	system("pause");
	return 1;
}

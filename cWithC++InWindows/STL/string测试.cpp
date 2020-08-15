#include <stdio.h>
#include <cstring>
#include <string>

int main(){
	std::string chuan="abcdefg";
	
	/*
	*.c_str():将自身转化为一个以空终止符结束（即带”\0“结尾）的char型字符串。
	*.data():将自身转化为一个以空终止符结束（即带”\0“结尾）的char型字符串。
	*/
	printf("%s\n",chuan.c_str());
	printf("%s\n",chuan.data());

	system("pause");
	return 0;
} 

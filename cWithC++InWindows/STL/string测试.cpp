#include <stdio.h>
#include <cstring>
#include <string>

int main(){
	std::string chuan="abcdefg";
	
	/*
	*.c_str():������ת��Ϊһ���Կ���ֹ��������������\0����β����char���ַ�����
	*.data():������ת��Ϊһ���Կ���ֹ��������������\0����β����char���ַ�����
	*/
	printf("%s\n",chuan.c_str());
	printf("%s\n",chuan.data());

	system("pause");
	return 0;
} 

#include <iostream>
#include <Windows.h>
#include<string>
#include<thread>  
 
 
using namespace std;
 
HANDLE initserialport(char *szStr) {
	//const char temp[5]="COM4";
	
	WCHAR wszClassName[5];
	memset(wszClassName, 0, sizeof(wszClassName));
	MultiByteToWideChar(CP_ACP, 0, szStr, strlen(szStr) + 1, wszClassName,
		sizeof(wszClassName) / sizeof(wszClassName[0]));
	HANDLE hCom1 = CreateFile(wszClassName,//COM1��
		GENERIC_READ | GENERIC_WRITE, //�������д
		0, //��ռ��ʽ
		NULL,
		OPEN_EXISTING, //�򿪶����Ǵ���
		0, //ͬ����ʽ
		NULL);
 
	//if (hCom1 == (HANDLE)-1)
	if (hCom1 == INVALID_HANDLE_VALUE)
	{
		printf("��COMʧ��!\n");
		//return FALSE;
	}
	else
	{
		printf("COM�򿪳ɹ���\n");
	}
 
	SetupComm(hCom1, 1024, 1024); //���뻺����������������Ĵ�С����1024
	COMMTIMEOUTS TimeOuts;
	//�趨����ʱ
	TimeOuts.ReadIntervalTimeout = 100;
	TimeOuts.ReadTotalTimeoutMultiplier = 5000;
	TimeOuts.ReadTotalTimeoutConstant = 5000;
	//�趨д��ʱ
	TimeOuts.WriteTotalTimeoutMultiplier = 500;
	TimeOuts.WriteTotalTimeoutConstant = 2000;
	SetCommTimeouts(hCom1, &TimeOuts); //���ó�ʱ
	DCB dcb;
	GetCommState(hCom1, &dcb);
	dcb.BaudRate = 115200; //������Ϊ115200 
	dcb.ByteSize = 8; //ÿ���ֽ���8λ
	dcb.Parity = NOPARITY; //����żУ��λ
	dcb.StopBits = ONESTOPBIT; //1��ֹͣλ
	SetCommState(hCom1, &dcb);
	return hCom1;
}
 
 
int main() {
	/*����ģ��
	string result="233";
	WriteFile(hCom1, result.data(), result.size(), NULL, NULL);
	*/
	HANDLE hCom1 = initserialport("COM4");
 
	char buf[1000];
	DWORD readsize;
	int n = 100;
	while(n--){
	ReadFile(hCom1, buf, 13, &readsize, NULL);
	cout <<"����Ϊ��"<< buf;
}
	system("pause");
}



#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <sys/timeb.h>
#include <string>
using namespace std;
long long getTimeStamp()
{
	timeb t;
	ftime(&t);
	return t.time * 1000 + t.millitm;
}
void func()
{
	//��ȡ���뼶ʱ�����
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	char shijianchuo[50];
	char showtime[50];

	sprintf_s(shijianchuo, "%04d%02d%02d%02d%02d%02d%02d"
		, sys.wYear, sys.wMonth, sys.wDay
		, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds);

	sprintf_s(showtime, "%04d-%02d-%02d %02d:%02d:%02d:%02d"
		, sys.wYear, sys.wMonth, sys.wDay
		, sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds);
	cout << shijianchuo << endl;
	cout << showtime << endl;

}

int main(void)
{
	func();
	string unix;
	unix= to_string(getTimeStamp());
	cout << unix << endl;
	
	return 0;
}

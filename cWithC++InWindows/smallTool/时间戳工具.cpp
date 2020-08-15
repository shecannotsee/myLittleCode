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
	//获取毫秒级时间操作
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

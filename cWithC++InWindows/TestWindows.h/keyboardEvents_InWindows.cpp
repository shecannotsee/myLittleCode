#include <conio.h>//_kbhit() and _getch()
#include <iostream>
using namespace std;
int main()
{
	int ch;
	while (1){
		if (_kbhit()){//����а������£���_kbhit()����������
			ch = _getch();//ʹ��_getch()������ȡ���µļ�ֵ
			cout << ch;
			if (ch == 27){ break; }//ESC,27
		}
	}
	system("pause");
	return 0;
}
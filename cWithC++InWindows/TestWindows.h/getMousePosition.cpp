#include <Windows.h>
#include <stdio.h> 

int main(){
	LONG zx = -1;
	LONG zy = -1;
	POINT ptB = { 0, 0 };
	while (1)
	{				
		LPPOINT xy = &ptB;	//λ�ñ���
		GetCursorPos(xy);	//��ȡ��굱ǰλ��		
		//�������ƶ���������ǰ������ı����ӡ�����꣩��ӡ�������ꡣ
		if ((zx != xy->x) || (zy != xy->y))
		{
			printf("x=%d,y=%d\n", xy->x, xy->y);
			zx = xy->x;
			zy = xy->y;
		}
	}	
}
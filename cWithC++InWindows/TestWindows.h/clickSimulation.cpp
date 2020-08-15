#include <Windows.h>
#include <iostream>
#include <time.h>//time()
#include <conio.h>//Used to respond to keyboard events.
//Sleep(1000) is sleep 1 sencond.
/*_kbhit()*/
//_kbhit():If a key is pressed, the _kbhit() function returns true
/*_getch()*/
//_getch():Gets the pressed key using the _getch() function.return integer.
/*LeftClick*/
void LeftClick(){
  INPUT    Input={0};
  // left down 
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTDOWN;
  ::SendInput(1,&Input,sizeof(INPUT));
 
  // left up
  ::ZeroMemory(&Input,sizeof(INPUT));
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_LEFTUP;
  ::SendInput(1,&Input,sizeof(INPUT));
}
/*RightClick*/
void RightClick ( ){  
  INPUT    Input={0};
  // right down 
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_RIGHTDOWN;
  ::SendInput(1,&Input,sizeof(INPUT));
 
  // right up
  ::ZeroMemory(&Input,sizeof(INPUT));
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_RIGHTUP;
  ::SendInput(1,&Input,sizeof(INPUT));
}
 /*MouseMove*/
void MouseMove (int x, int y ){ 
  double fScreenWidth    = ::GetSystemMetrics( SM_CXSCREEN )-1; 
  double fScreenHeight  = ::GetSystemMetrics( SM_CYSCREEN )-1; 
  double fx = x*(65535.0f/fScreenWidth);
  double fy = y*(65535.0f/fScreenHeight);
  INPUT  Input={0};
  Input.type      = INPUT_MOUSE;
  Input.mi.dwFlags  = MOUSEEVENTF_MOVE|MOUSEEVENTF_ABSOLUTE;
  Input.mi.dx = fx;
  Input.mi.dy = fy;
  ::SendInput(1,&Input,sizeof(INPUT));
}


/*-------------------------------------------*/
int main(){
  while(true){
    Sleep(1000);
    MouseMove(0,20);
  }
}
// int main(){
//   int flag;
//   while (1){
//         if (_kbhit()){//如果有按键按下，则_kbhit()函数返回真
//             flag = _getch();//使用_getch()函数获取按下的键值
//             if (flag == 27){ break; }//当按下ESC时循环，ESC键的键值时27.
//         }
//     }
// }
/*
字母和数字键的键码值(keyCode)
A	65	J	74	S	83	1	49
B	66	K	75	T	84	2	50
C	67	L	76	U	85	3	51
D	68	M	77	V	86	4	52
E	69	N	78	W	87	5	53
F	70	O	79	X	88	6	54
G	71	P	80	Y	89	7	55
H	72	Q	81	Z	90	8	56
I	73	R	82	0	48	9	57

数字键盘上的键的键码值(keyCode)	功能键键码值(keyCode)
0	96	8	104	F1	112	F7	118
1	97	9	105	F2	113	F8	119
2	98	*	106	F3	114	F9	120
3	99	+	107	F4	115	F10	121
4	100	Enter	108	F5	116	F11	122
5	101	-	109	F6	117	F12	123
6	102	.	110	 	 	 	 
7	103	/	111	 	 	
*/
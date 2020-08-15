#include<iostream>
using namespace std;
#include<ctime>
class Clock{
	int h;
	int m;
	int s;
public:
	void set(int hour,int min,int sec);//set(int ,int ,int )
	void tick();
	void show();
	void run();
};
void Clock::set(int hour,int min,int sec)
{
	h=hour;
	m=min;
	s=sec;
}
void Clock::tick()
{
	time_t t=time(NULL);//ȡ�õ�ǰʱ��
	while(time(NULL)==t);
	if(--s<0){
		s=59;
		if(--m<0){
			m=59;
			--h<0;
		}
	}
}
void Clock::show()
{
	cout<<'\r';
	if(h<10)cout<<0;
	cout<<h<<':';
	if(m<10)cout<<0;
	cout<<m<<':';
	if(s<10)cout<<0;
	cout<<s<<flush;
}
void Clock::run()
{
	while(h!=0||m!=0||s!=0){
		tick();
		show();
	}
	cout<<endl<<"Time out!"<<endl;
	cout<<'\a';
}
int main()
{
	Clock c;
	cout<<"�����뵹��ʱ��ʱ�䣺";
	int h1,m1,s1;
	cin>>h1>>m1>>s1;
	c.set(h1,m1,s1);
	c.run();
}

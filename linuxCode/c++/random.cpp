#include <random>//c++11添加的随机数生成器
#include <iostream>
#define RANDOM_LEN (10000)//将概率数组的长度设置为10000，这样能够支持小数点后两位的概率
#define TAKEPLACETIMES (12458)//事件发生的次数
using namespace std;

int main() {
	random_device rd;//rd()是随机数生成器
	double temp;//需要概率
	bool randomArray[RANDOM_LEN] = {0};//概率数组，初始化为0

part1:
	cout << "请输入概率，最多支持两位小数（例如34.89%，请输入34.89）" << endl;
	cin >> temp;
	if (!(temp >= 0.0 && temp <= 100.0)) {//检测数据是否正常
		cout << "输入数据有误";
		goto part1;
	}
	//输入的数据若正常，则产生随机数组
	for (int i = 0; i<int(temp * 100); i++) {
		randomArray[i] = true;
	}

	//概率测试
	int Do = 0;//发生次数
	int notDo = 0;//未发生次数
	for (int i = 0; i < TAKEPLACETIMES; i++) {//让事件发生 TAKEPLACETIMES 次
		int index = rd() % RANDOM_LEN;
		if (randomArray[index])Do++;
		else notDo++;
	}

	cout << "概率是" << temp << "%\n";
	cout << "事件进行了" << TAKEPLACETIMES << "次\n";
	cout << "发生了" << Do << "次\n";
	cout << "没有发生" << notDo << "次\n";
	cout << "实际的发生概率是" << ((double)Do / (double)TAKEPLACETIMES*100) << "%\n";

	system("pause");
	return 1;
}

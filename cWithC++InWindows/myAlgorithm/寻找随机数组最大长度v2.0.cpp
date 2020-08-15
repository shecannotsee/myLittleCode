//0 - 53 / 1 - 54
//
//随机取n个不重复数字
//
//找几个n个数字里，连续的
//长度最长的几段（1，2，4，5，7，9，8）最大长度789和45
//非连续的不算（1，3，5）
#include <iostream>
#include <random>
#include <list>

#define MAXSIZE 54//数组的最大长度

//用来寻找数组中连续最长的信息节点1.用于原始数组的构建2.用于对连续字段的信息的存储
typedef struct searchLongestNode{
	int value;
	int flag = 0;
}searchLongestNode;

//传入要检测连续字段的 随机数组（基于searchLongestNode的数组），以及存储字段信息（将在函数里添加信息）的list<searchLongestNode>
void searchLongestFunction(searchLongestNode originalArray[],std::list<searchLongestNode>& continuousInfo) {
	searchLongestNode temp;//需要在list尾部插入的信息节点
	for (int i = 0; i < MAXSIZE; i++) {
		if (i != MAXSIZE - 1 && originalArray[i].flag == 1 && originalArray[i + 1].flag == 1) {//最后一个不必判断，单独不连续，连续不在此判断
			temp.flag = i;//存储连续的初始位置
			temp.value = 0;
			while (originalArray[i].flag == 1 && i != MAXSIZE ) {//防止越界造成未知的错误
				temp.value++;
				i++;
			}
			continuousInfo.push_back(temp);//信息插入
		}
	}
}

int main() {
	//产生原始数组和随机数组（要取出原始数组的位置）
	searchLongestNode originalArray[MAXSIZE];//原始数组（value表示数组的值，flag表示该节点是否被取出）
	std::list<searchLongestNode> continuousInfo;//用来存储连续信息的链表（value表示连续数组的长度，flag表示从何处开始连续）
	std::random_device rd;//通过rd()产生随机数
	int randomArray[MAXSIZE];
	//原始数组赋值为0-MAXSIZE，并产生MAXSIZE个范围在0-MAXSIZE的随机数
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[i].value = i;
		randomArray[i] = rd() % MAXSIZE;
	}
	//随机取数组里的值（将flag从0改为1）
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[randomArray[i]].flag = 1;
	}
	//测试：打印随机出来的数组
	for (int i = 0; i < MAXSIZE; i++) {
		if (originalArray[i].flag) { std::cout << originalArray[i].value<<" "; }
	}
	std::cout << std::endl;
	//计算
	searchLongestFunction(originalArray, continuousInfo);
	//测试：结果打印
	auto it = continuousInfo.begin();
	while (it != continuousInfo.end()) {
		std::cout << "从" << (*it).flag << "开始连续\t";
		std::cout << "连续的长度为" << (*it).value << std::endl;
		it++;
	}
	//测试：结束处理
	std::cout << std::endl;
	system("pause");
	return 1;
}
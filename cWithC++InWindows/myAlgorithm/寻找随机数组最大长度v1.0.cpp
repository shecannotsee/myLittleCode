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
#define MAXSIZE 54

typedef struct node{
	int value;
	bool flag = false;
	bool relation = false;
}node;

int main() {
	//产生原始数组和随机数组（要取出原始数组的位置）
	node originalArray[MAXSIZE];
	std::random_device rd;
	int randomArray[MAXSIZE];
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[i].value = i;
		randomArray[i] = rd() % MAXSIZE;
	}
	//随机取数组里的值
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[randomArray[i]].flag = true;
	}
	//打印随机出来的数组
	for (int i = 0; i < MAXSIZE; i++) {
		if (originalArray[i].flag) { std::cout << originalArray[i].value<<" "; }
	}
	//做连续判断
	for (int i = 0; i < MAXSIZE; i++) {
		if (i==0){
			if (originalArray[i].flag&&originalArray[i + 1].flag) { originalArray[i].relation = true; }
		}
		else if (i == 53) {
			if (originalArray[i].flag&&originalArray[i-1].flag) { originalArray[i].relation = true; }
		}
		else {
			if (originalArray[i].flag&&originalArray[i - 1].flag|| originalArray[i].flag&&originalArray[i + 1].flag ) { originalArray[i].relation = true; }
		}
	}
	//分隔比便于打印
	std::cout << std::endl;
	//连续长度输出
	std::list<int> temp;
	int relationTime;
	for (int i = 0; i < MAXSIZE; i++) {
		if (originalArray[i].relation && i != MAXSIZE - 1) {
			relationTime = 0;
			temp.push_back(i);
			std::cout << "从" << i << "开始连续" << std::endl;
			while (originalArray[i].relation&&i!=MAXSIZE) { relationTime++; i++; }//防止在while的时候越界
			temp.back() += relationTime*100;
			std::cout << "连续长度为" << relationTime << std::endl;
		}
	}

	std::cout << "----------------------------" << std::endl;
	auto it = temp.begin();
	while (it != temp.end()) {
		std::cout << "从" << (*it)%100 << "开始连续" << std::endl;
		std::cout << "连续长度为" << (*it)/100 << std::endl;
		it++;
	}

	std::cout << std::endl;
	system("pause");
	return 1;
}
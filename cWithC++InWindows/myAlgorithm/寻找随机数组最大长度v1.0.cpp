//0 - 53 / 1 - 54
//
//���ȡn�����ظ�����
//
//�Ҽ���n�������������
//������ļ��Σ�1��2��4��5��7��9��8����󳤶�789��45
//�������Ĳ��㣨1��3��5��
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
	//����ԭʼ�����������飨Ҫȡ��ԭʼ�����λ�ã�
	node originalArray[MAXSIZE];
	std::random_device rd;
	int randomArray[MAXSIZE];
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[i].value = i;
		randomArray[i] = rd() % MAXSIZE;
	}
	//���ȡ�������ֵ
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[randomArray[i]].flag = true;
	}
	//��ӡ�������������
	for (int i = 0; i < MAXSIZE; i++) {
		if (originalArray[i].flag) { std::cout << originalArray[i].value<<" "; }
	}
	//�������ж�
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
	//�ָ��ȱ��ڴ�ӡ
	std::cout << std::endl;
	//�����������
	std::list<int> temp;
	int relationTime;
	for (int i = 0; i < MAXSIZE; i++) {
		if (originalArray[i].relation && i != MAXSIZE - 1) {
			relationTime = 0;
			temp.push_back(i);
			std::cout << "��" << i << "��ʼ����" << std::endl;
			while (originalArray[i].relation&&i!=MAXSIZE) { relationTime++; i++; }//��ֹ��while��ʱ��Խ��
			temp.back() += relationTime*100;
			std::cout << "��������Ϊ" << relationTime << std::endl;
		}
	}

	std::cout << "----------------------------" << std::endl;
	auto it = temp.begin();
	while (it != temp.end()) {
		std::cout << "��" << (*it)%100 << "��ʼ����" << std::endl;
		std::cout << "��������Ϊ" << (*it)/100 << std::endl;
		it++;
	}

	std::cout << std::endl;
	system("pause");
	return 1;
}
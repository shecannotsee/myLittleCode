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

#define MAXSIZE 54//�������󳤶�

//����Ѱ�����������������Ϣ�ڵ�1.����ԭʼ����Ĺ���2.���ڶ������ֶε���Ϣ�Ĵ洢
typedef struct searchLongestNode{
	int value;
	int flag = 0;
}searchLongestNode;

//����Ҫ��������ֶε� ������飨����searchLongestNode�����飩���Լ��洢�ֶ���Ϣ�����ں����������Ϣ����list<searchLongestNode>
void searchLongestFunction(searchLongestNode originalArray[],std::list<searchLongestNode>& continuousInfo) {
	searchLongestNode temp;//��Ҫ��listβ���������Ϣ�ڵ�
	for (int i = 0; i < MAXSIZE; i++) {
		if (i != MAXSIZE - 1 && originalArray[i].flag == 1 && originalArray[i + 1].flag == 1) {//���һ�������жϣ��������������������ڴ��ж�
			temp.flag = i;//�洢�����ĳ�ʼλ��
			temp.value = 0;
			while (originalArray[i].flag == 1 && i != MAXSIZE ) {//��ֹԽ�����δ֪�Ĵ���
				temp.value++;
				i++;
			}
			continuousInfo.push_back(temp);//��Ϣ����
		}
	}
}

int main() {
	//����ԭʼ�����������飨Ҫȡ��ԭʼ�����λ�ã�
	searchLongestNode originalArray[MAXSIZE];//ԭʼ���飨value��ʾ�����ֵ��flag��ʾ�ýڵ��Ƿ�ȡ����
	std::list<searchLongestNode> continuousInfo;//�����洢������Ϣ������value��ʾ��������ĳ��ȣ�flag��ʾ�Ӻδ���ʼ������
	std::random_device rd;//ͨ��rd()���������
	int randomArray[MAXSIZE];
	//ԭʼ���鸳ֵΪ0-MAXSIZE��������MAXSIZE����Χ��0-MAXSIZE�������
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[i].value = i;
		randomArray[i] = rd() % MAXSIZE;
	}
	//���ȡ�������ֵ����flag��0��Ϊ1��
	for (int i = 0; i < MAXSIZE; i++) {
		originalArray[randomArray[i]].flag = 1;
	}
	//���ԣ���ӡ�������������
	for (int i = 0; i < MAXSIZE; i++) {
		if (originalArray[i].flag) { std::cout << originalArray[i].value<<" "; }
	}
	std::cout << std::endl;
	//����
	searchLongestFunction(originalArray, continuousInfo);
	//���ԣ������ӡ
	auto it = continuousInfo.begin();
	while (it != continuousInfo.end()) {
		std::cout << "��" << (*it).flag << "��ʼ����\t";
		std::cout << "�����ĳ���Ϊ" << (*it).value << std::endl;
		it++;
	}
	//���ԣ���������
	std::cout << std::endl;
	system("pause");
	return 1;
}
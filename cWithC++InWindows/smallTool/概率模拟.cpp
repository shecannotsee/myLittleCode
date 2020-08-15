#include <random>
#include <iostream>
#define RANDOM_LEN (10000)
#define TAKEPLACETIMES (10000)
using namespace std;

int main() {
	random_device rd;
	double temp;
	bool randomArray[RANDOM_LEN] = {0};

part1:
	cout << "��������ʣ����֧����λС��������34.89%��������34.89��" << endl;
	cin >> temp;
	if (!(temp >= 0.0 && temp <= 100.0)) {
		cout << "������������";
		goto part1;
	}
	
	for (int i = 0; i<int(temp * 100); i++) {
		randomArray[i] = true;
	}
	
	int Do = 0;
	int notDo = 0;
	for (int i = 0; i < TAKEPLACETIMES; i++) {
		int index = rd() % RANDOM_LEN;
		if (randomArray[index])Do++;
		else notDo++;
	}

	cout << "������" << temp << endl;
	cout << "�¼�������" << TAKEPLACETIMES << "��\n";
	cout << "������" << Do << "��\n";
	cout << "û�з���" << notDo << "��\n";
	cout << "ʵ�ʵķ���������" << ((double)Do / (double)TAKEPLACETIMES*100) << "%\n";

	system("pause");
	return 1;
}

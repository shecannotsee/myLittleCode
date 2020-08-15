/**
����-1-2-3-4-�����Ĵ��ġ����ơ��Ӵ����жϣ�2341��3412��4123��
1243��2431��4312��3124�����ǡ����ơ��ִ� 
*/
#include <iostream>
#include <string> 
using namespace std;

int* getNext(string p)
    {
        int* next = new int[p.length()];
        next[0] = -1;           //while the first char not match, i++,j++
        int j = 0;
        int k = -1;
        while (j < (int)p.length() - 1){
            if (k == -1 || p[j] == p[k]){
                j++;
                k++;
                next[j] = k;
            }
            else{
                k = next[k];
            }
        }
        return next;
    }

int kmp(string T,string p)
    {
        int i=0;
        int j=0;
        int* next=getNext(T);
        while (i < (int)T.length() && j < (int)p.length()){
            if (j == -1 || T[i] == p[j]){
                i++;
                j++;
            }
            else{
                j=next[j];
            }
        }
        if (j == (int)p.length()){
            return 1;
        }
        return 0;
    }

void usekmp(){
	string initial,temp;
	cout<<"input the initial string"<<endl;
	cin>>initial;
	initial+=initial;
	cout<<"now string' bit is "<<initial.size()<<endl;
	cout<<"input the son string"<<endl;
	cin>>temp;
	cout<<kmp(initial,temp)<<endl;
};

int main(){
	//string a("a");
	//cout<<(int)a[0]<<endl;//���Ϊ97��a��Ӧ��ascii���ֵΪ97
	
	//ƴ��ԭʼ�ַ�����1+1������kmpƥ�䣬�����ơ����1���������0
	usekmp();
	
	//��ƫ���������������������Ƚ� 
	//���ڲ���������ļ��㣬���޷�������� 
	
	system("pause");
	return 0;
} 
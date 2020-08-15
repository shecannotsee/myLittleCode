/**
对于-1-2-3-4-这样的串的“相似”子串的判断（2341，3412，4123）
1243，2431，4312，3124并不是“相似”字串 
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
	//cout<<(int)a[0]<<endl;//输出为97，a对应的ascii表的值为97
	
	//拼接原始字符串（1+1），用kmp匹配，“相似”输出1，否则输出0
	usekmp();
	
	//用偏移量矩阵计算二范数用来比较 
	//由于不会二范数的计算，故无法具体操作 
	
	system("pause");
	return 0;
} 
#include<iostream>
#include<string>
using namespace std;
string T;
string pat;
void getNext(int next[],int lengthP){//lengthPΪģʽ��P�ĳ��� 
    int j=0,k=-1;//jΪP�����±꣬k������¼���±��Ӧ��next�����ֵ 
    next[0]=-1;//��ʼ��0�±��µ�next����ֵΪ-1 
    while(j<lengthP){ //��ģʽ������ɨ�� 
        if(k==-1||pat[j]==pat[k]){//����׺��ǰ׺û����ȵ��Ӵ����ߴ�ʱj�±��µ��ַ���k�µ��ַ���ȡ� 
            j++;k++; 
            next[j]=k;//����next����j�±��ֵΪk 
        }else
            k=next[k];//��С�Ӵ��ķ�Χ�����Ƚ� 
    }
}

int kmp(int k,int next[]){
    int posP=0,posT=k;//posP��posT�ֱ���ģʽ��pat��Ŀ�괮T���±꣬�ȳ�ʼ�����ǵ���ʼλ�� 
    int lengthP=pat.length();//lengthP��ģʽ��pat�� 
    int lengthT=T.length();//lengthT��Ŀ�괮T�� 
    while(posP<lengthP&&posT<lengthT){//������ɨ�� 
        if(posP==-1||pat[posP]==T[posT]){//��Ӧ�ַ�ƥ�� 
            posP++;posT++;
        }else
            posP=next[posP];//ʧ��ʱ����next����ֵѡ����һ��ƥ���λ�� 
    }
    if(posP<lengthP) return -1;
    else return posT-lengthP;//ƥ��ɹ� 
}

int main(){
    T="aaabbbaabbabcabcabbaba";
    pat="bab";
    int lengthP=pat.length();
    int next[lengthP]={0};
    getNext(next,lengthP);
    int pos=kmp(0,next);
    cout<<pos<<endl;
    cout<<"next[]:";
    for(int i=0;i<lengthP;i++){
        cout<<next[i]<<" "; 
    } 
    return 0;
}
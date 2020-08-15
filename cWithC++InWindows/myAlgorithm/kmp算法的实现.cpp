#include<iostream>
#include<string>
using namespace std;
string T;
string pat;
void getNext(int next[],int lengthP){//lengthP为模式串P的长度 
    int j=0,k=-1;//j为P串的下标，k用来记录该下标对应的next数组的值 
    next[0]=-1;//初始化0下标下的next数组值为-1 
    while(j<lengthP){ //对模式串进行扫描 
        if(k==-1||pat[j]==pat[k]){//串后缀与前缀没有相等的子串或者此时j下标下的字符与k下的字符相等。 
            j++;k++; 
            next[j]=k;//设置next数组j下标的值为k 
        }else
            k=next[k];//缩小子串的范围继续比较 
    }
}

int kmp(int k,int next[]){
    int posP=0,posT=k;//posP和posT分别是模式串pat和目标串T的下标，先初始化它们的起始位置 
    int lengthP=pat.length();//lengthP是模式串pat长 
    int lengthT=T.length();//lengthT是目标串T长 
    while(posP<lengthP&&posT<lengthT){//对两串扫描 
        if(posP==-1||pat[posP]==T[posT]){//对应字符匹配 
            posP++;posT++;
        }else
            posP=next[posP];//失配时，用next数组值选择下一次匹配的位置 
    }
    if(posP<lengthP) return -1;
    else return posT-lengthP;//匹配成功 
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
#include <iostream>
using namespace std;
int main(){
    int temp[3000];
    int flag=-1;
    for(int i=1;i<1001;i++){
        flag++;
        temp[flag]=i%3;
        flag++;
        temp[flag]=i%7;
        flag++;
        temp[flag]=i%11;
    }
part1:
    int x;
    cout<<"input!\n";
    cin>>x;
    int a=x%3,b=x%7,c=x%11;
    for(int i=0;i<3000;i=i+3){
        if( (a==temp[i]) && (b==temp[i+1]) && (c==temp[i+2]) ){
            cout<<((i/3)+1)<<endl;//231 is a loop
        }
    }
goto part1;
}
/*
0   0,0,0
1   1,1,1
2   2,2,2
3   0,3,3
4   1,4,4
5   2,5,5
6   0,6,6
7   1,0,7
......
*/
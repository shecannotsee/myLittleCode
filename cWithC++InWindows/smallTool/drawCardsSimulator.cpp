/*This is a simulator for drawing cards
    Here are the items and the corresponding probabilities
    A four-star weapons:4.580%(with a special weapons we call A,its probability is 1.831%)=UR(URR)
    A four-star stigmata:7.815%=SSR
    A three-star weapons:11.230%=SR 
    A three-star stigmata:33.690%=R
    Universal evolutionary material:17.070%=UEM
    Equipment and experience:17.070%=EE
    Gold:8.545%=G
*/
#include <random>
#include <iostream>
#define ZERO    (0)
#define URR     (0)//1.831%,accumulation is 1.831%
#define P_URR   (1831)
#define UR      (1)//2.749%,,accumulation is 4.580%
#define P_UR    (4580)
#define SSR     (2)//7.815%,accumulation is 12.395%
#define P_SSR   (12395)
#define SR      (3)//11.230%,accumulation is 23.625%
#define P_SR    (23625)
#define R       (4)//33.690%,accumulation is 57.315%
#define P_R     (57315)
#define UEM     (5)//17.070%,accumulation is 74.385%
#define P_UEM   (74385)
#define EE      (6)//17.070%,accumulation is 91.455%
#define P_EE    (91455)
#define G       (7)// 8.545%,accumulation is 100.000%
#define P_G     (100000)
using namespace std;
//return result(like URR,UR,SSR,SR,R,UEM,EE,G)
int result(int temp);

int main(){
part1:
    cout<<"һ�ز���������1��ʮ�ز���������10"<<endl;//1 times or 10 times
    int times;
    cin>>times;
    if(!(times==1||times==10)){
        cout<<"�����ʲô���������������֮�������㡣"<<endl;//Remind the player to enter the correct number
    }

    random_device rd;//about random with rd()
    //the number of Card-Drawing (just 1 or 10)
    for(int i=0;i<times;i++){
        switch(result(rd()%100000)){
            case URR:cout<<"��ϣ�������*֮Կ���Ⲩ�����Ⲩ����ɣ�"<<endl;
                break;
            case UR:cout<<"��������Ŷ����ϣ�"<<endl;
                break;
            case SSR:cout<<"����ʥ�ۣ���ϣ�"<<endl;
                break;
            case SR:cout<<"����������"<<endl;
                break;
            case R:cout<<"����ʥ�ۣ�"<<endl;
                break;
            case UEM:cout<<"�����ͨ�ý�������Ŷ��"<<endl;
                break;
            case EE:cout<<"�����һЩװ������Ŷ��"<<endl;
                break;
            case G:cout<<"�����һЩ���Ŷ��"<<endl;
                break;
            default:cout<<"There was a slight error......"<<endl;
                break;
        }
    }
    

goto part1;
}

int result(int temp){
    if(temp>=ZERO && temp<P_URR){
        return URR;
    }
    else if(temp>=P_URR && temp<P_UR){
        return UR;
    }
    else if(temp>=P_UR && temp<P_SSR){
        return SSR;
    }
    else if(temp>=P_SSR && temp<P_SR){
        return SR;
    }
    else if(temp>=P_SR && temp<P_R){
        return R;
    }
    else if(temp>=P_R && temp<P_UEM){
        return UEM;
    }
    else if(temp>=P_UEM && temp<P_EE){
        return EE;
    }
    else if(temp>=P_EE && temp<P_G){
        return G;
    }
    return -1;
}

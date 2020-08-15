#include <iostream>
#include <string.h>
#include "serialport.h"
#include <unistd.h>//sleep and usleep
using namespace std;
int main(){
    WzSerialPort w;
    if (w.open("/dev/pts/9", 115200, 0, 8, 1)){
        char buf[1024];
        while(1){
            memset(buf, 0,1024);
            w.receive(buf, 1024);
            cout<<buf;
            //usleep(10);
        }
    }
    cout<<"error"<<endl;
}
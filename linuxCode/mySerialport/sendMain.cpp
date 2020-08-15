#include <iostream>
#include <string.h>
#include "serialport.h"
#include <vector>
#include <unistd.h>//sleep and usleep
using namespace std;
int main(){
    WzSerialPort w;

    if (w.open("/dev/pts/8", 115200, 0, 8, 1)){
        while(true){
            w.send("helloworld",10);
            //sleep(5);
        }
        w.close();
    }
    cout<<"error"<<endl;
}
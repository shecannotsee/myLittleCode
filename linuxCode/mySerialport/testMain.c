#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>//sleep
#include <fcntl.h>//open
#include <assert.h>//?
#include <termios.h>//?
#include <errno.h>//?
#include <sys/types.h>//open
#include <sys/stat.h>//open
#include <sys/ttydefaults.h>
//============/dev/tty8
//============Bps/Par/Bits:115200 8
int main(){
    int fd=open("/dev/ttyS0",O_RDWR);
part1:
    printf("Open ttyS0 success!fd=%d\n",fd);
    sleep(11);
goto part1;
}
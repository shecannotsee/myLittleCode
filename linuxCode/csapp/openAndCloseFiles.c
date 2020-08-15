#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//1,2,3//int open(char* filename,int flags,mode_t mode);
//flage:O_RDUNLY,O_WRONLY,O_RDWR
//		:O_CREAT,O_TRUNC,O_APPEND
#include <unistd.h>
//4//int close(int fd);
//4//ssize_t read(int fd,void* buf,size_t n);
//4//ssize_t write(int fd,const void* buf,size_t n);i
#include <stdio.h>
#include <string.h>

int main(){
	int fd1,fd2;

	const char* foo = "this is foo.txt";
	const char* baz = "this is baz.txt";
	fd1 = open("foo.txt",O_RDWR,0);
	write(fd1,foo,strlen(foo));
	close(fd1);

	fd2 = open("baz.txt",O_RDONLY,0);
	printf("fd2 = %d\n",fd2);
	close(fd2);
	return 0;
}


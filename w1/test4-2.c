#include <stdio.h>  
#include <unistd.h>  
#include <sys/types.h>
#include <sys/stat.h>   
#include <fcntl.h>      
#include <stdlib.h>  

char buf[100];
char buf1[] = "abcdefghij";
char buf2[] = "ABCDEFGHIJ";

int main(){
	int fd;
	if((fd=creat("file.hole",FILE_MODE)) < 0);
		err_sys("create error");
	if(write(fd,buf1,10) !=10)
		err_sys("buf1 write error");
	if(lseek(fd,5,SEEK_SET) == -1)
		err_sys("lseek error");
	if(read(fd,buf,5) ==-1)
		err_sys("read error");
	else
	printf("buf=%s\n",buf);
	if(lseek(fd,40,SEEK_SET) == -1)
    err_sys("lseek error");
	if(write(fd,buf2,10) !=10)
	err_sys("write error");

}

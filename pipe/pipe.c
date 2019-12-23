#include "my.h"

int main()
{
	pid_t result;
	int r_num;
	int pipe_fd[2];
	char buf_r[100];
	memset(buf_r,0,sizeof(buf_r));
	if(pipe(pipe_fd)<0)
	{
		printf("make pipe filed");
		return -1;
}
	result = fork();
	if(result < 0)
	{
		perror("make fork failed");
		exit;
}
	else if(result == 0)
	{
		close(pipe_fd[1]);
		if(r_num = read(pipe_fd[0],buf_r,100))>0)
		printf("son process read from pipe %d byte,the byte is : %s\n",r_num,buf_r);
		close(pipe_fd[0]);
		exit(0);
}
	else
	{
		close(pipe_fd[0]);
	if(write(pipe_fd[1]))
}
}

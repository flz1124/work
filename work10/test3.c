#include "my.h"



int  g=10;
int main()
{
	int s=20;
	static k=30;
	pid_t pid;
	pid = vfork();
	if(pid<0)
	{	
		perror("fail vfork\n");
		exit(-1);
}
	else if(pid == 0)
	{
		sleep(2);
		printf("child pid = %d : &g = %16p ,&k = %16p,&s = %16p\n",getpid(),&g,&k,&s);
		g = 100;
		k = 300;
		s = 200;
		printf("child pid = %d : &g = %d, &k = %d, &s = %d\n",getpid(),g,k,s);

		while(g!=400)
		{
			printf("waiting for g =400\n");
}
		_exit(0);
		//sleep(2);
		//exit(0);
}
	else{
			printf("parent pid = %d : &g = %16p,&k = %16p, &s = %16p\n",getpid(),&g,&k,&s);
			printf("parent pid = %d : &g = %d,&k = %d, &s = %d\n",getpid(),g,k,s);
			return 0;
}

}



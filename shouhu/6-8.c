#include "my.h"

void init_daemon(void);
int main()
{
	FILE *fp;
	time_t t;
	init_daemon();
	while(1)
	{
		sleep(1);
		if((fp = fopen("6-8.log","a")) >=0)
		{
			t = time(0);
			fprintf(fp,"define process is running,time is : %s",asctime(localtime(&t)));
			fclose(fp);
}
}
}

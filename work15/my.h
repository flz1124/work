#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <wait.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>


#define LOOP 10000000
#define NUM 4
#define NT 100

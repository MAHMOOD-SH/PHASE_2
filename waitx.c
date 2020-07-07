#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{
  int pid;
  int waiting_time, running_time, waitx_pid;

  pid = fork();
  
  if (pid == 0)
    {	
    exec(argv[1],argv);
    printf(1, "execution of New Process %s failed\n", argv[1]);
    }

  else
  {
    waitx_pid = waitx(&waiting_time,&running_time);
    printf(1, "Waiting Time = %d\nRuning Time = %d\nProcess id: %d \n",waiting_time,running_time,waitx_pid);
    printf(1, "Response time = %d \n",waiting_time+running_time);
  }

  exit();
}

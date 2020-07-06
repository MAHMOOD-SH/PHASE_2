#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{
  int pid;

  pid = fork ();
  if (pid == 0)
    {	
    exec(argv[1],argv);
    printf(1, "execution of New Process %s failed\n", argv[1]);
    }
  else
  {
    /* code */
  }
  
  exit();
}

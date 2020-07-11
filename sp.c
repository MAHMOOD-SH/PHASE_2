#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc,char *argv[])
{
  int priority, pid;
  int old_priority;

  if ( argc < 3 ) 
  {
    printf(2, "Usage: sp pid prority");
    exit();
  }

  pid = atoi(argv[1]);
  priority = atoi(argv[2]);
  
  if (priority < 0 || priority > 100)
    {	
    printf(2, "Invalid priority value. [0-100]");
    exit();
    }

  old_priority = set_priority(pid, priority);
  printf(1, "pid= %d , new_priority= %d", pid, priority);
  printf(1, " , old_priority= %d\n", old_priority);

  exit();
}

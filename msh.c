#include "types.h"
#include "stat.h"
#include "user.h"

int main (int argc,char *argv[])
{
  int id=0;

  id = fork();
  if ( id < 0 )
    {
      printf(1, "%d fork failed!\n", getpid());
    }
  else if ( id > 0 ) 
    {
      printf(1, "parent = %d , child = %d\n", getpid(), id);
      wait();
    }
  else 
    {
      for ( ; ; ) ;
    }

  exit();
}

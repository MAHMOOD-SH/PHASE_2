#include "types.h"
#include "stat.h"
#include "user.h"


typedef int (*FunctionCallback)(char *);

int 
main(int argc, char *argv[])
{
  int pid;
  int a,b;
  FunctionCallback functions[] = {&mkdir, &mkdir};
  exit();
}

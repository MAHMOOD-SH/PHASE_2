#include "types.h"
#include "stat.h"
#include "user.h"

int 
main()
{
  int waiting_time;
  int running_time;
  waitx(&waiting_time, &running_time);
  exit();
}

#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  if(argc != 2){
    fprintf(2, "Usage: test_scheduler <number_of_tickets>\n");
    exit(1);
  }

  int tickets = atoi(argv[1]);

  if(tickets < 1){
    fprintf(2, "error: ticket count must be a positive integer\n");
    exit(1);
  }

  if(settickets(tickets) < 0){
    fprintf(2, "error: settickets failed\n");
    exit(1);
  }

  while(1){
    // spin — keeps process RUNNABLE for the scheduler
  }

  exit(0);
}
#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include <stdint.h>

typedef int tid_t;

struct process 
  {
    tid_t tid;
    // TODO: define other fields needed for a user process
  };

void process_init (struct process* process, int tid);
tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);
void process_set_exit_status (int32_t);
int32_t process_get_exit_status (void);

#endif /* userprog/process.h */

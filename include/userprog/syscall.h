#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

void syscall_init (void);

void check_address (void *addr);

void SyS_exit (int status);

#endif /* userprog/syscall.h */

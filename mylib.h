#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define CHECK_PTR(ptr) { if (ptr == NULL) { fprintf(stderr, "Error: could not allocate heap memory.\n"); exit(-1); } }

void *ec_malloc(unsigned int);
void fatal(char *);
void binary_print(unsigned int);

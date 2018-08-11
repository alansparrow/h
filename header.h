#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHECK_PTR(ptr) { if (ptr == NULL) { fprintf(stderr, "Error: could not allocate heap memory.\n"); exit(-1); } }

void *errorchecked_malloc(unsigned int);

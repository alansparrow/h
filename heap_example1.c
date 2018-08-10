#include "header.h"

#define CHECK_PTR(ptr) { if (ptr == NULL) { fprintf(stderr, "Error: could not allocate heap memory.\n"); exit(-1); } }

int main()
{
  int *i_p1, *i_p2;

  i_p1 = (int *) malloc(31);
  CHECK_PTR(i_p1);
  i_p2 = (int *) malloc(4);
  CHECK_PTR(i_p2);

  *i_p1 = 1234;
  *i_p2 = 3456;
  
  printf("i_p1 (%p) --> %d\n", i_p1, *i_p1);
  printf("i_p2 (%p) --> %d\n", i_p2, *i_p2);
  
  free(i_p1);
  free(i_p2);
  
  return 0;
}

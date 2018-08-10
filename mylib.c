#include "./mylib.h"

void *errorchecked_malloc(unsigned int size)
{
  void *ptr;
  ptr = malloc(size);
  CHECK_PTR(ptr);
  return ptr;
}

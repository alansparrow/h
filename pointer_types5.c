#include <stdio.h>

int main()
{
  int i;

  char char_array[5] = {'a', 'b', 'c', 'd', 'e' };
  int int_array[5] = {1, 2, 3, 4, 5};

  long hacky_nonpointer;

  hacky_nonpointer = (long) int_array;
  
  for (i = 0; i < 5; i++)
    {
      printf("[integer pointer] points to %p, which contains the integer %d\n", hacky_nonpointer, *((int *) hacky_nonpointer));
      hacky_nonpointer += sizeof(int);
    }

  hacky_nonpointer = (long) char_array;
  
  for (i = 0; i < 5; i++)
    {
      printf("[char pointer] points to %p, which contains the char '%c'\n", hacky_nonpointer, *((char *) hacky_nonpointer));
      hacky_nonpointer += sizeof(char);
    }
		     
  
  return 0;
}

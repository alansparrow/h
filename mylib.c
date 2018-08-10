#include "./mylib.h"

void *ec_malloc(unsigned int size)
{
  void *ptr;
  ptr = malloc(size);
  CHECK_PTR(ptr);
  return ptr;
}

void fatal(char *message)
{
  char error_message[100];

  strcpy(error_message, "[!!] Fatal Error ");
  strncat(error_message, message, 83);
  perror(error_message);
  exit(-1);
}

void binary_print(unsigned int value)
{
  unsigned int mask = 0xff000000;
  unsigned int shift = 256*256*256;

  for (int byte_iterator = 0; byte_iterator < 4; byte_iterator++)
    {
      int byte = (value & mask) / shift;
      printf(" ");
      for (int bit_iterator = 0; bit_iterator < 8; bit_iterator++)
	{
	  if (byte & 0x80)
	    printf("1");
	  else
	    printf("0");

	  byte *= 2;
	}
      mask /= 256;
      shift /= 256;
    }
}

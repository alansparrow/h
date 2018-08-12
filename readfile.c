#include "./mylib.h"
#include <unistd.h>


#define FILENAME "./tmp.txt"

int main()
{
  int fd;
  char buffer[100];
  int read_size;
  
  fd = open(FILENAME, O_RDONLY);
  if (fd == -1)
    {
      printf("Error: Cannot open file!\n");
      return -1;
    }

  printf("before read: %s\n", buffer);

  printf("after read: %s (read: %d)\n", buffer, read(fd, buffer, 5));
    
  printf("before lseek: %d\n", lseek(fd, 0, SEEK_CUR));
  lseek(fd, -3, SEEK_CUR);
  printf("after lseek: %d\n", lseek(fd, 0, SEEK_CUR));
	 
  printf("after read: %s (read: %d)\n", buffer, read(fd, buffer, 5));
  
  return 0;
}

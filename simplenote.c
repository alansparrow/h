#include "./mylib.h"

void usage(char *prog_name, char *filename)
{
  printf("Usage: %s <data to add to %s>\n", prog_name, filename);
  exit(0);
}

int main(int argc, char *argv[])
{

  int fd;
  char *buffer, *datafile;

  buffer = (char *) ec_malloc(100);
  datafile = (char *) ec_malloc(20);
  strcpy(datafile, "./notes");

  if (argc < 2)
    usage(argv[0], datafile);

  strcpy(buffer, argv[1]);

  printf("[DEBUG] buffer \t@ %p: \'%s\'\n", buffer, buffer);
  printf("[DEBUG] datafile \t@ %p: \'%s\'\n", datafile, datafile);

  strncat(buffer, "\n", 1);

  fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
  if (fd == -1)
    fatal("in main() while opening file");
  printf("[DEBUG] file descriptor is %d\n", fd);

  if (write(fd, buffer, strlen(buffer)) == -1)
    fatal("in main() while writing buffer to file");

  if (close(fd) == -1)
    fatal("in main() while closing file");

  printf("Note has been saved.\n");
  free(buffer);
  free(datafile);
  
  return 0;
}


	   

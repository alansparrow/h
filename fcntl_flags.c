#include "./mylib.h"

void display_flags(char *, unsigned int);

int main(int argc, char* argv[])
{
  display_flags("O_RDONLY\t\t", O_RDONLY);
  display_flags("O_WRONLY\t\t", O_WRONLY);
  display_flags("O_RDWR\t\t\t", O_RDWR);
  printf("\n");
  display_flags("O_APPEND\t\t", O_APPEND);
  display_flags("O_TRUNC\t\t\t", O_TRUNC);
  display_flags("O_CREAT\t\t\t", O_CREAT);
  printf("\n");
  display_flags("O_WRONLY|O_APPEND|O_CREAT", O_WRONLY|O_APPEND|O_CREAT);

  return 0;
}

void display_flags(char *label, unsigned int value)
{
  printf("%s\t: %d\t:", label, value);
  binary_print(value);
  printf("\n");
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "elf.c"

int main(int argc, char *argv[]) /* might make it accept cmdline arguments later */
{
  struct elf *p;
  
  p = init_elf(p);
  print_elf(p);
  
  return 0;
}

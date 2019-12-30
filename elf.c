#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 48

struct elf {
  int size[BUFSIZE];
  char *name;
} m_elf; 


int * init_array()
{
  int array[BUFSIZE];
  for ( int i = 0; i < BUFSIZE; i++ ) {
    array[i] = 2 + i;
    }
    
    return array;
}
    
struct *init_elf(struct *elf)
{
  elf->size = init_array();
  strcpy("Mecker", elf->name);
  
  return elf;
}

void print_elf(struct *elf)
{
  for ( int i = 0; i < BUFSIZE; i++ ) {
    printf("%d ", elf->size[i]);
  }
  printf("\n%s\n", name);
}

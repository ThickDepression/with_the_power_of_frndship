#include <stdio.h>
#include "main.h"

int main(void) {
  long int lnum = 123456789;
  long unsigned int luns_num = 987654321;
  unsigned int uns_num = 456;
  int neg_num = -789;
  unsigned int hex_num = 0xABCDEF;
  unsigned int oct_num = 01234567;

  printf("l handler with i specifier:\n");
  printf("printf: %li\n", lnum);
  _printf("custom: %li\n", lnum);
  printf("\n");

  printf("l handler with d specifier:\n");
  printf("printf: %ld\n", lnum);
  _printf("custom: %ld\n", lnum);
  printf("\n");

  printf("l handler with u specifier:\n");
  printf("printf: %lu\n", luns_num);
  _printf("custom: %lu\n", luns_num);
  printf("\n");

  printf("l handler with o specifier:\n");
  printf("printf: %lo\n", lnum);
  _printf("custom: %lo\n", lnum);
  printf("\n");

  printf("l handler with x specifier:\n");
  printf("printf: %lx\n", lnum);
  _printf("custom: %lx\n", lnum);
  printf("\n");

  printf("l handler with X specifier:\n");
  printf("printf: %lX\n", lnum);
  _printf("custom: %lX\n", lnum);
  printf("\n");

  printf("printf and custom _printf with u specifier:\n");
  printf("printf: %u\n", uns_num);
  _printf("custom: %u\n", uns_num);
  printf("\n");

  printf("printf and custom _printf with d specifier and a negative number:\n");
  printf("printf: %d\n", neg_num);
  _printf("custom: %d\n", neg_num);
  printf("\n");

  printf("printf and custom _printf with x specifier and a hexadecimal value:\n");
  printf("printf: %x\n", hex_num);
  _printf("custom: %x\n", hex_num);
  printf("\n");

  printf("printf and custom _printf with o specifier and an octal value:\n");
  printf("printf: %o\n", oct_num);
  _printf("custom: %o\n", oct_num);
  printf("\n");

  return 0;
}

#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

/******** print function and display prompt ********/
void lee_print(const char *asempa);
int main(void);
void display_prompt(void);

/******** exec handler ********/
void exec_cmd(const char *cmd);

/******** parser handler ********/
void read_cmd(char *cmd, size_t size);

#endif

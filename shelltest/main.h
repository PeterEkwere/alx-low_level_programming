#ifndef MAIN_H_
#define MAIN_H_

#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct linked_path{
	char *dir;
	struct linked_path *next;
} linked_path;
extern char **environ;
char *_strtok(char *str, const char *delim);
char *_getenv(const char *name);
linked_path *link_path(void);

#endif

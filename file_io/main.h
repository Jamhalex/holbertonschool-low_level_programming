#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* read, write */
#include <fcntl.h>  /* open */
#include <stdlib.h> /* malloc, free */

ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char c);

#endif /* MAIN_H */


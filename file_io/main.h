#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* read, write */
#include <fcntl.h>  /* open */
#include <stdlib.h> /* malloc, free */

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);

#endif /* MAIN_H */


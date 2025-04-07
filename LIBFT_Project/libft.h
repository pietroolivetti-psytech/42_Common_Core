#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalnum(int c);
int ft_isprint(int c);
int ft_isascii(int c);
size_t ft_strlen(char *str);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
size_t ft_strlcat(char *dest, const char *src, size_t dest_size);
char *ft_strdup(char *src);
//void ft_memset(void *block, int c, size_t len);
void *ft_memset(void *b, int c, size_t len);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);

#endif

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
/*STRINGS*/
size_t ft_strlen(const char *s);
int ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strcat(char *restrict s1, const char *restrict s2);
char *ft_strncat(char *restrict s1, char *restrict s2, size_t n);
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char *ft_strdup(const char *s1);
/*CHARS*/
int ft_toupper(int c);
int ft_tolower(int c);
#endif
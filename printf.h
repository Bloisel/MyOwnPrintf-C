#ifndef LIB_H
# define LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>

size_t	ft_strlen(const char *str);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
void	ft_putnbr(int n);
size_t	ft_wordzt(int nb);

#endif

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>

int		ft_printf(const char *str, ...);
size_t	ft_putnbr(int n);
size_t  ft_putnbr_base2(unsigned long long nbr, char *base);
size_t	ft_putnbr_base(unsigned int nbr, char *base);
size_t 	ft_putnbr_unsigned(unsigned int nbr);
size_t	ft_strlen(const char *str);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
#endif

#include "ft_printf.h"

size_t	ft_putstr(char *s)
{
	if (!s)
		return (0);
	write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}

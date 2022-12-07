#include "printf.h"

size_t ft_wordzt(int nb)
{
	size_t i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -1;
	}
	while ((size_t)nb > 9)
	{
		i++;
		nb = nb / 10;
	}
	i++;
	return (i);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


size_t ft_wordcount(int nb)
{
	i = 1;

	if (nb < 0)
		i++;

	while ((size_t)nb / 10)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

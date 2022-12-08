#include "ft_printf.h"

size_t ft_word_unsigned(unsigned int nb)
{
	size_t i;

	i = 0;
	
	while (nb > 9)
	{
		i++;
		nb = nb / 10;
	}
	i++;
	return (i);
}

size_t	ft_putnbr_unsigned(unsigned int nbr)
{
	char w;
	
	if (nbr > 9)
		ft_putnbr_unsigned(nbr / 10);
		
	w = (nbr % 10) + 48;
	write (1, &w, 1);
	
	return (ft_word_unsigned(nbr));
}

#include "ft_printf.h"

size_t ft_wd_unsigned(unsigned int nb,int base)
{
	size_t i;

	i = 0;
	if(nb < 0)
	{
		i++;
		nb = -1;
	}
	while (nb >= ((unsigned int)base))
	{
		i++;
		nb = nb / base;
	}
	i++;
	return (i);
}

size_t	ft_putnbr_base(unsigned int nbr, char *base)  //size_t *ret)
{
	unsigned int base_nb;

	base_nb = ft_strlen(base);

	if (nbr >= base_nb)
			ft_putnbr_base(nbr / base_nb, base); //ret);

	write (1, &base[(nbr % base_nb)], 1);
	//*ret += 1;
	return (ft_wd_unsigned(nbr,base_nb));
}

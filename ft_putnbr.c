#include "printf.h"

void	ft_putnbr(int nb)
{
	char w;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else 
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb *= - 1;
		}
		if (nb > 9)
			ft_putnbr(nb / 10);
		w = (nb % 10) + 48;
		write (1, &w, 1);
	}
}

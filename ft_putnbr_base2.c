#include "ft_printf.h"

size_t ft_wd_long(unsigned long long nb,int base)
{
        size_t i;

        i = 0;
       // if(nb < 0)
       // {
         //       i++;
          //      nb = -1;
        //}
        while (((unsigned long long)nb) >= ((unsigned long long)base))
        {
                i++;
                nb = nb / base;
        }
        i++;
        return (i);
}

size_t  ft_putnbr_base2(unsigned long long nbr, char *base)
{
        unsigned long long base_nb;

        base_nb = ft_strlen(base);

        if (nbr >= base_nb)
                        ft_putnbr_base2(nbr / base_nb, base);

        write (1, &base[(nbr % base_nb)], 1);
        
        return (ft_wd_long(nbr,base_nb));
}
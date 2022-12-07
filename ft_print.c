#include "printf.h"

void	ft_newprint(char c, long long arg, size_t *i, size_t *compteur)
{
	*i += 2;

	if (c == 'd' || c == 'i')
	{
		ft_putnbr((int)arg);
		*compteur += ft_wordzt((int)arg);
	}
		// putnbr
		// numbercount
	if (c == 'c')
	{
		*compteur += ft_putchar((char)arg);
	}
		// putchar
	if (c == 's')
	{
		if (arg != 0)
				*compteur += ft_putstr((char *)arg);
		else 
				*compteur += ft_putstr("(null)");

	}
		// putstr
		// strlen
	if (c == '%')
	{
		*compteur += ft_putchar('%');
	}
		//
}

int	ft_print(char *str, ...)
{
	va_list arg;
	size_t i;
	size_t count;

	count = 0;
	i = 0;
	va_start(arg,str);
	
	// changer la condition pour backslash
	if (str[i] == '%' && str[i + 1] != '%')
	{	
		// print i 
		ft_newprint(str[i + 1], va_arg(arg, long long), &i, &count);
		// print i (pas de changement si pas dadresse idem count )
	}
	else
	{
		ft_putchar(str[i]);
		i++;
		count++;
	}
	va_end(arg);
	// printf("%zu\n",count);
	return (count);
}
int main()
{
	ft_print("%d\n",200);
	ft_print("\n");
	ft_print("%c\n",'a');
	ft_print("\n");
	ft_print("%%");
	ft_print("\n");
	ft_print("%s","bastien");
	ft_print("\n");
	ft_print("%s",'\0');
	ft_print("\n");
	ft_print("%i", 8);
	return (0);
}

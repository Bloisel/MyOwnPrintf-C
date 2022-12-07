#include "printf.h"

void	ft_newprint(char c, long long arg, size_t *i, size_t *compteur)
{
	*i += 2;

	if (c == 'd')
	{
		ft_putnbr((int)arg);
		// *compteur += printf("%zu",ft_wordzt((int)arg));
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

	if (str[i] == '%' && str[i + 1] != '%')
	{	
		ft_newprint(str[i + 1], va_arg(arg, long long), &i, &count);
	}
	else
	{
		ft_putchar(str[i]);
		i++;
		count++;
	}
	va_end(arg);
	return (count);
}
int main()
{
	ft_print("%d\n",200);
	ft_print("%c\n",'a');
	ft_print("%%/n");
	ft_print("%s\n","bastien");
	ft_print("%s\n",'\0');
	return (0);
}

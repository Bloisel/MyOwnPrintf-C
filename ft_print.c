#include <stdar.h>
#include <stdio.h>

void	ft_newprint(char c, long long arg, size_t *i, size_t *compteur)
{

	*i += 1;

	if(c == 'd')

	if (c == 'c')

	if (c == 's')

	if (c == '%')

	if (c == 'u')






}

int	ft_print(char * str, ...)
{
	va_list arg;
	size_t i;
	size_t count;

	count = 0;
	i = 0;

	if (str[i] == '%')
		ft_newprint(str[i],va_arg(long long, str), &i, &count);
	else
	{
		ft_putchar(str);
		i++;
	}
	va_end(arg);
	return (compteur);
}

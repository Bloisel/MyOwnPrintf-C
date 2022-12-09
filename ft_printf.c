#include "ft_printf.h"

void	ft_newprint(char c, long long arg, size_t *i, size_t *compteur)
{
	*i += 2;
	if (c == 'd' || c == 'i')
		*compteur += ft_putnbr((int)arg);
	if (c == 'c')
		*compteur += ft_putchar((char)arg);
	if (c == 's')
	{
		if (arg != 0)
				*compteur += ft_putstr((char *)arg);
		else 
				*compteur += ft_putstr("(null)");
	}
	if (c == '%')
		*compteur += ft_putchar('%');
	if (c == 'u')
		*compteur += ft_putnbr_unsigned((unsigned int)arg);
	if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			*compteur += ft_putnbr_base(((unsigned int)arg),"0123456789abcdef");
		else
			*compteur += ft_putnbr_base(((unsigned int)arg),"0123456789ABCDEF");
	}
	if (c == 'p')
	{
		*compteur += ft_putstr("0x");
		*compteur += ft_putnbr_base2((unsigned long long)arg,"0123456789abcdef");
	}
	
}

int	ft_printf(const char *str, ...)
{
	va_list arg;
	size_t i;
	size_t count;

	count = 0;
	i = 0;
	va_start(arg,str);
	while (str[i])
	{	
		if (str[i] == '%' && (str[i + 1] == 'c' || str[i + 1] == 'd' || 
		str[i + 1] == 'p'|| str[i + 1] == 'x' || str[i + 1] == 'X'|| 
		str[i + 1] == 'i'|| str[i + 1] == 's' || str[i + 1] == 'u'))				
			ft_newprint(str[i + 1], va_arg(arg, long long), &i, &count);
		else if (str[i] == '%' && str[i + 1] == '%')
		{
			write(1, "%",1);
			i += 2;
			count++;
		}
		else
		{
			ft_putchar(str[i]);
			i++;
			count++;
		}
	}
	va_end(arg);
	// printf("%zu\n",count);
	return (count);
}


// int main()
// {
// 	ft_printf("%u", 2);
// }
// 	printf("%p %p", 0, 0);
// 	//ft_printf("\n");
// 	//ft_printf("%d",200);

//int main()
//{
	//unsigned long long i;
	//i = 0;
	//unsigned long long *a = &i;
	//printf(" %p %p ", 0, 0);
	//int main(void)
	//{
	//ft_printf(" %p %p ", "0", 0);
	//printf(" %p (void*)%d ", "0", 0);
	//}




//}



// int main()
// {
// 	int i;
// 	int j;

// 	i = ft_printf("%d\n",-10);
// 	j = printf("%d\n",-10);
// 	printf("fake = %d, real = %d\n", i, j);
// 	i = ft_printf("%d\n",-1);
// 	j = printf("%d\n",-1);
// 	printf("fake = %d, real = %d\n", i, j);
// 	i = ft_printf("%d\n",100);
// 	j = printf("%d\n",100);
// 	printf("fake = %d, real = %d\n", i, j);
// 	i = ft_printf("%d\n",101);
// 	j = printf("%d\n",101);
// 	printf("fake = %d, real = %d\n", i, j);
// 	i = ft_printf("%d\n",-15);
// 	j = printf("%d\n",-15);
	
// 	printf("%d",0);
// 	printf("\n");
// 	printf("%d",-1);
// 	printf("\n");
// 	printf("%d",9);
// 	printf("\n");
// 	printf("%d",100);
// 	printf("\n");
// 	printf("%d",101);
// 	printf("\n");
// 	printf("%d",-15);
// }
 
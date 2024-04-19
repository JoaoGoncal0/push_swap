/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:59:44 by jomendes          #+#    #+#             */
/*   Updated: 2023/10/31 12:51:11 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptraux(unsigned long int ptr)
{
	int	total;

	total = 0;
	if (!ptr)
		total += ft_putstr_fd("(nil)", 1);
	else
	{
		total += write(1, "0x", 2);
		total += ft_putnbr_base(ptr, EX_LOW_BASE);
	}
	return (total);
}

int	ft_straux(char *str)
{
	if (!str)
		return (ft_putstr_fd("(null)", 1));
	else
		return (ft_putstr_fd(str, 1));
}

int	flag_type(char c, va_list *args)
{
	int	total;

	total = 0;
	if (c == 'c')
		total += ft_putchar_fd((va_arg(*args, int)), 1);
	else if (c == 's')
		total += ft_straux(va_arg(*args, char *));
	else if (c == 'p')
		total += ft_ptraux(va_arg(*args, unsigned long int));
	else if (c == 'd' || c == 'i')
		total += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		total += ft_putunbr(va_arg(*args, unsigned int));
	else if (c == 'x')
		total += ft_putnbr_base(va_arg(*args, unsigned int), EX_LOW_BASE);
	else if (c == 'X')
		total += ft_putnbr_base(va_arg(*args, unsigned int), EX_UP_BASE);
	else if (c == '%')
		total += write(1, "%", 1);
	return (total);
}

static int	ft_is_char(const char *str, const char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		total;
	va_list	args;

	if (!str)
		return (-1);
	i = 0;
	total = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_is_char(POSSIBLE_FLAGS, str[i + 1]))
		{
			i++;
			total += flag_type(str[i], &args);
		}
		else
			total += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (total);
}

// int	main()
// {
// 	void *pointer_value = NULL;
// 	ft_printf("%d\n", ft_printf("%c, %s, %p, %d, %u, %x, %X, %%\n",
// '!', "abcd", pointer_value, 12, -4, 31, 555));
// 	printf("%d\n", printf("%c, %s, %p, %d, %u, %x, %X, %%\n",
// '!', "abcd", pointer_value, 12, -4, 31, 555));
// }
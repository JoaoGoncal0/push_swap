/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:29:21 by jomendes          #+#    #+#             */
/*   Updated: 2023/10/31 14:31:12 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
	{
		write(fd, &c, 1);
		return (1);
	}
	return (0);
}

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return (0);
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	char	c;
	int		total;

	total = 0;
	if (n == -2147483648)
		total += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			total += write(1, "-", 1);
		}
		if (n > 9)
		{
			total += ft_putnbr(n / 10);
			total += ft_putnbr(n % 10);
		}
		else
		{
			c = n + '0';
			total += write(1, &c, 1);
		}
	}
	return (total);
}

int	ft_putnbr_base(unsigned long int n, char *base)
{
	char	c;
	int		total;

	total = 0;
	if (n > 15)
	{
		total += ft_putnbr_base(n / 16, base);
		total += ft_putnbr_base(n % 16, base);
	}
	else
	{
		c = base[n];
		total += write(1, &c, 1);
	}
	return (total);
}

int	ft_putunbr(unsigned long int n)
{
	char	c;
	int		total;

	total = 0;
	if (n > 9)
	{
		total += ft_putnbr(n / 10);
		total += ft_putnbr(n % 10);
	}
	else
	{
		c = n + '0';
		total += write(1, &c, 1);
	}
	return (total);
}

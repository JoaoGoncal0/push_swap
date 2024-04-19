/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomendes <jomendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:43:00 by jomendes          #+#    #+#             */
/*   Updated: 2023/10/31 14:38:09 by jomendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define EX_LOW_BASE "0123456789abcdef"
# define EX_UP_BASE "0123456789ABCDEF"
# define POSSIBLE_FLAGS "cspdiuxX%"

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putnbr(int n);
int	ft_putnbr_base(unsigned long int n, char *base);
int	ft_putunbr(unsigned long int n);
int	ft_putstr_fd(char *s, int fd);
int	ft_putchar_fd(char c, int fd);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgretche <cgretche@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:54:42 by truthe            #+#    #+#             */
/*   Updated: 2021/12/01 13:46:01 by cgretche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pip(const char *st, va_list ap, int *i)
{
	if (*st == 'c')
	{
		ft_putchar(va_arg(ap, int));
		*i = *i + 1;
	}
	else if (*st == 's')
		*i = *i + ft_putstr(va_arg(ap, char *));
	else if (*st == 'p')
		*i = *i + ft_putvoid(va_arg(ap, unsigned long long));
	else if (*st == 'd' || *st == 'i')
		*i = *i + ft_putnbr(va_arg(ap, int));
	else if (*st == 'u')
		*i = *i + ft_unbr(va_arg(ap, unsigned int));
	else if (*st == 'x' || *st == 'X')
		*i = *i + ft_puthexa(va_arg(ap, unsigned int), *st) - 2;
	else if (*st == '%')
	{
		ft_putchar('%');
		*i = *i + 1;
	}
	else
	{
		write (1, st, 1);
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			str++;
			i++;
		}
		if (*str == '%')
		{
			pip(++str, ap, &i);
			str++;
		}
	}
	va_end(ap);
	return (i);
}

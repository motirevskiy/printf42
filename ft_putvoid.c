/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgretche <cgretche@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:19:41 by cgretche          #+#    #+#             */
/*   Updated: 2021/12/01 13:23:28 by cgretche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbrvoid(unsigned long long k)
{
	if (k >= 16)
		ft_putnbrvoid(k / 16);
	ft_putchar("0123456789abcdef"[k % 16]);
}

int	ft_putvoid(unsigned long long k)
{
	ft_putchar('0');
	ft_putchar('x');
	ft_putnbrvoid(k);
	return (calchexa(k));
}

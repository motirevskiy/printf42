/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgretche <cgretche@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:21:16 by cgretche          #+#    #+#             */
/*   Updated: 2021/12/01 13:38:29 by cgretche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	if (num == -2147483648)
	{
		ft_putchar ('-');
		ft_putchar ('2');
		ft_putnbr(147483648);
	}
	else if (num < 0)
	{
		ft_putchar('-');
		ft_putnbr(num * (-1));
	}
	else
	{
		if (num >= 10)
			ft_putnbr(num / 10);
		ft_putchar((num % 10) + '0');
	}
	return (calc (num));
}

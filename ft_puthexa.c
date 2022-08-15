/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgretche <cgretche@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:19:47 by cgretche          #+#    #+#             */
/*   Updated: 2021/12/01 13:23:32 by cgretche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(long long int x, char c)
{
	int	d;

	d = calchexa(x);
	if (x >= 16)
		ft_puthexa(x / 16, c);
	if (c == 'x')
		ft_putchar("0123456789abcdef"[x % 16]);
	if (c == 'X')
		ft_putchar("0123456789ABCDEF"[x % 16]);
	return (d);
}

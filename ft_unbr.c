/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgretche <cgretche@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:20:49 by cgretche          #+#    #+#             */
/*   Updated: 2021/12/01 13:23:21 by cgretche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unbr(unsigned int l)
{
	long int	u;

	u = l;
	if (u >= 10)
		ft_unbr(u / 10);
	ft_putchar(u % 10 + 48);
	return (calc(l));
}

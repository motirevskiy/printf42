/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgretche <cgretche@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:22:14 by cgretche          #+#    #+#             */
/*   Updated: 2021/12/01 13:38:46 by cgretche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *ap)
{
	int	n;

	n = 0;
	if (ap == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (ap[n])
		ft_putchar (ap[n++]);
	return (n);
}

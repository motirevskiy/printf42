/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgretche <cgretche@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:13:27 by cgretche          #+#    #+#             */
/*   Updated: 2021/12/01 13:38:04 by cgretche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(int ap);
int		ft_putstr(char *ap);
int		calc(long long d);
int		ft_putnbr(int num);
int		ft_unbr(unsigned int l);
int		calchexa(unsigned long long d);
int		ft_putvoid(unsigned long long k);
int		ft_puthexa(long long int x, char c);
int		ft_printf(const char *str, ...);

#endif
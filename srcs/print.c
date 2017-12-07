/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:52:52 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/28 17:52:55 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	print_format(char x)
{
	write(1, &x, 1);
}

void	print(int start, int end, char *format)
{
	while (start < end && format[start] != '\0')
		print_format(format[start++]);
}

void	print_plus(t_flags *bag, long int *nb)
{
	if (PLUS == true)
		if (*nb > -1)
			ft_putchar('+', bag);
	if (*nb < 0 && *nb != (-9223372036854775807 - 1))
	{
		ft_putchar('-', bag);
		*nb *= -1;
	}
	PLUS = false;
}

void	print_hash(t_flags *bag, unsigned long long int nb)
{
	if (TYPE == 'x' || TYPE == 'X')
	{
		if (HASH == true && nb != 0)
			(TYPE == 'x')	? ft_putstr("0x", bag) : ft_putstr("0X", bag);
	}
	if (TYPE == 'o' || TYPE == 'O')
	{
		if (HASH == true && PRECISION - LEN < 0)
			ft_putstr("0", bag);
	}
	if (TYPE == 'p' && HASH == true)
		ft_putstr("0x", bag);
	
	HASH = false;
}

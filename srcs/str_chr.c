/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psprawka <psprawka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:34:05 by psprawka          #+#    #+#             */
/*   Updated: 2017/11/27 11:34:07 by psprawka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"


int		colors(char *s, t_flags *bag)
{
	if (ft_strcmp(s, YELLOW) == 0 || ft_strcmp(s, BLACK) == 0 || ft_strcmp(s, WHITE) == 0 ||
		ft_strcmp(s, NORMAL) == 0 || ft_strcmp(s, GREEN) == 0 || ft_strcmp(s, CYAN) == 0 ||
		ft_strcmp(s, MAGNETA) == 0 || ft_strcmp(s, RED) == 0 || ft_strcmp(s, BLUE) == 0)
	{
		ft_putstr(s, bag);
		return (1);
	}
	return (0);
}

/*
** print_width prints both precision and width for either characher or string
*/

void	parse(t_flags *bag)
{
	ZERO = PRECISION < 0 ? false : ZERO;
	LEN = (PRECISION < LEN && IF_PREC == true) ? PRECISION : LEN;
	WIDTH = (PRECISION < 0) ? PRECISION * -1 : WIDTH - LEN;
	WIDTH = (TYPE == 'c' && PRECISION < 0) ? 0 : WIDTH;
}

/*
** ----------------------------- STRING - s | WSTRING - S ---------------------------------
*/

void	print_string(t_flags *bag, va_list ap)
{
	char	*str;

	str = va_arg(ap, char *);
	str = (str == NULL ? "(null)" : str);
	if (colors(str, bag) == 1)
		return ;
	LEN = ft_strlen(str);
	parse(bag);
	if (MINUS == false)
		while (WIDTH-- > 0)
			ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
	while (LEN-- > 0 && *str != '\0')
		ft_putchar(*str++, bag);
	while (WIDTH-- > 0)
		ft_putchar(' ', bag);
}

int			ft_wclen(wchar_t *ws)
{
	int	len;
	
	len = 0;
	while (ws[len])
	{
		if (ws[len] > 0xFF)
			return (-1);
		len++;
	}
	return (len);
}

char	*convert_wide(wchar_t *str, int len)
{
	char	*new;
	int		i;
	
	i = 0;
	new = (char *)malloc(len + 1);
	while (i < len)
	{
		new[i] = (char)str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	print_wchar_str(t_flags *bag, va_list ap)
{
	char	*str;
	wchar_t* wstr;

	wstr = (wchar_t *)va_arg(ap, wchar_t *);
	str = ARGUMENT == 7 ? convert_uni(*wstr++) : convert_wide(wstr, ft_wclen(wstr));
	if (ft_wclen(wstr) == -1 && ARGUMENT != 7)
		return ;
	while (*wstr != '\0' && ARGUMENT == 7)
		str = ft_strjoin(str, convert_uni(*wstr++));
	LEN = ft_strlen(str);
	parse(bag);
	if (MINUS == false)
		while (WIDTH-- > 0)
			ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
	while (LEN-- > 0 && *str != '\0')
		ft_putchar(*str++, bag);
	while (WIDTH-- > 0)
		ft_putchar(' ', bag);
}

/*
** --------------------------------- CHAR - c, C --------------------------------------
*/

void	print_char(t_flags *bag, va_list ap)
{
	unsigned char x;
	
	x = (unsigned char)va_arg(ap, int);
	LEN = 1;
	parse(bag);
	if (MINUS == false)
		while (WIDTH-- > 0)
			ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
	ft_putchar(x, bag);
	while (WIDTH-- > 0)
		ft_putchar(' ', bag);
}

void	print_wchar(t_flags *bag, va_list ap)
{
	char	*x;
	wchar_t	wx;
	wx = va_arg(ap, wint_t);
	x = convert_uni((wchar_t)(wx));
	
	LEN = 1;
	parse(bag);
	if (MINUS == false)
		while (WIDTH-- > 0)
			ZERO == true ? ft_putchar('0', bag) : ft_putchar(' ', bag);
	ft_putstr(x, bag);
	while (WIDTH-- > 0)
		ft_putchar(' ', bag);
}

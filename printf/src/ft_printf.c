/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:43:09 by fwong             #+#    #+#             */
/*   Updated: 2022/06/05 19:46:21 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_check (char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || 
		c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_fonction(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(args));
	else if (c == 's')
		return	(ft_putstr(args));
	else if (c == 'p')
		return	(ft_pointeur(args));
	else if (c == 'd')
		return	(ft_integer(args));
	else if (c == 'i')
		return	(ft_integer(args));
	else if (c == 'u')
		return	(ft_unsignedint(args));
	else if (c == 'x')
		return	(ft_hexamin(args));
	else if (c == 'X')
		return	(ft_hexamaj(args));
	else if (c == '%')
		return	(ft_pourcentage(args));
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	len;
	
	va_list args;
	
	va_start(args, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && ft_check(str[i + 1]) == 1)
		{
			len += ft_fonction(str[i], args);
			i += 2;
		}
		else
		{
			ft_putchar(str[i]);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}

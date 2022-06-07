/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:43:09 by fwong             #+#    #+#             */
/*   Updated: 2022/06/07 22:14:09 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_check(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	else
		return (0);
}

int	ft_fonction(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(args);
	else if (c == 's')
		len += ft_putstr(args);
	else if (c == 'p')
		len += ft_pointer(args);
	else if (c == 'd' || c = 'i')
		len += ft_integer(args);
	else if (c == 'u')
		len += ft_unsignedint(args);
	else if (c == 'x')
		len += ft_hexa_min(args);
	else if (c == 'X')
		len += ft_hexa_maj(args);
	else if (c == '%')
		len += ft_percent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && ft_check(str[i + 1]) == 1)
		{
			len += ft_fonction(str[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
			i++;
		}
	}
	va_end(args);
	return (len);
}

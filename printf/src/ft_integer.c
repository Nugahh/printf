/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:26:13 by fwong             #+#    #+#             */
/*   Updated: 2022/06/06 18:42:05 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>

int	ft_intlen(int k)
{
	int	i;

	i = 0;
	while (k != 0)
	{
		k /= 10;
		i++;
	}
	return (i);
}

int	ft_integer(va_list args)
{
	int	num;

	num = (int)va_arg(args, int);
	ft_putnbr(num, 1);

	return (ft_intlen(num));
}
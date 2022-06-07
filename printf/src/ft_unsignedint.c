/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:34:20 by fwong             #+#    #+#             */
/*   Updated: 2022/06/07 19:44:41 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsignednbr(unsigned int n)
{
	unsigned int	a;

	if (n > 0 && n <= 9)
	{
		a = '0' + n;
		write(1, &a, 1);
	}
	else
	{
		ft_putunsignednbr(n / 10);
		ft_putunsignednbr(n % 10);
	}
}

int	ft_unsignedintlen(unsigned int k)
{
	unsigned int	i;

	i = 0;
	while (k != 0)
	{
		k /= 10;
		i++;
	}
	return (i);
}

int	ft_unsignedint(va_list args)
{
	unsigned int	num;

	num = (unsigned int)va_arg(args, unsigned int);
	ft_putunsignednbr(num);
	return (ft_intlen(num));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_maj.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:52:00 by fwong             #+#    #+#             */
/*   Updated: 2022/06/07 19:44:11 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* int	ft_hexalen(unsigned int nb)
{
	int	i;

	while (nb != 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
} */

void	ft_putnbr_hexa_maj(unsigned int num)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (num > 0 && num <= 16)
		write(1, &base[num], 1);
	else
	{
		ft_putnbr_hexa_maj(num / 16);
		ft_putnbr_hexa_maj(num % 16);
	}
}

int	ft_hexa_maj(va_list args)
{
	unsigned int	base;

	base = (unsigned int)va_arg(args, unsigned int);
	ft_putnbr_hexa_maj(base);
	return (ft_hexalen(base));
}

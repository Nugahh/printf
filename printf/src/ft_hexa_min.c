/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:48:00 by fwong             #+#    #+#             */
/*   Updated: 2022/06/06 19:51:17 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>

int	ft_hexalen(unsigned int nb)
{
	int	i;
	
	while (nb != 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

void	ft_putnbr_hexa(unsigned int num)
{
	char base[16] = "0123456789abcdef";
	
	if (num >= 0 && num <= 16)
		write(1, &base[num], 1);
	else
	{
		ft_putnbr_hexa(num / 16);
		ft_putnbr_hexa(num % 16);
	}
}

int	ft_hexa_min(va_list args)
{
	unsigned int	base;
	
	base = (unsigned int)va_arg(args, unsigned int);
	ft_putnbr_hexa(base);
	
	return (ft_hexalen(base));
}
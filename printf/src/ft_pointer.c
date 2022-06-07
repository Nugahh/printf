/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:16:05 by fwong             #+#    #+#             */
/*   Updated: 2022/06/07 19:44:27 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer_len(unsigned long long nb)
{
	int	i;

	while (nb != 0)
	{
		nb /= 16;
		i++;
	}
	return (i);
}

int	ft_pointer_hexa(unsigned long long ptr)
{
	char	*base;

	base = "0123456789abcdef";
	if (ptr > 0 && ptr <= 16)
	{
		write(1, "0x", 1);
		write(1, &base[ptr], 1);
	}
	else
	{
		ft_pointer_hexa(ptr / 16);
		ft_pointer_hexa(ptr % 16);
	}
	return (ft_pointer_len(ptr));
}

int	ft_pointer(va_list args)
{
	unsigned long long	base;

	base = (unsigned long long)va_arg(args, void *);
	ft_pointer_hexa(base);
	return (ft_pointer_len(base));
}

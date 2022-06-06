/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:16:05 by fwong             #+#    #+#             */
/*   Updated: 2022/06/06 20:39:33 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>
#include <stdint.h>

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

int ft_pointer_hexa(unsigned long long ptr)
{
	char base[16] = "0123456789abcdef";
	
	if (ptr >= 0 && ptr <= 16)
	{
		write(1, "0x", 1);
		write(1, &base[ptr], 1);
	}
	else
	{
		ft_putnbr_hexa(ptr / 16);
		ft_putnbr_hexa(ptr % 16);
	}
}

int	ft_pointer(va_list args)
{
	unsigned long long base;

	base = (unsigned long long)va_arg(args, unsigned long long);
	ft_pointer_hexa(base);

	return (ft_pointer_len(base));
}
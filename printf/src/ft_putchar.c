/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:32:53 by fwong             #+#    #+#             */
/*   Updated: 2022/06/06 17:34:13 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>

int	ft_putchar(va_list args)
{
	char	c;
	
	c = (char)va_arg(args, int);
	ft_putchar_fd(c, 1);
	                                                                                                                                                                     
	return (1);
}

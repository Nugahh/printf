/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:27:22 by fwong             #+#    #+#             */
/*   Updated: 2022/06/07 22:11:46 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
} */

int	ft_putstr(va_list args)
{
	char	*str;

	str = (char *)va_arg(args, char *);
	if (!str)
		return (ft_putstr_fd("(null)", 1), 6);
	else
		return (ft_putstr_fd(str, 1), ft_strlen(str));
}

/* int	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:41:27 by fwong             #+#    #+#             */
/*   Updated: 2022/06/07 19:44:24 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_printf.h"

 int	ft_percent()
 {
	 write (1, "%", 1);
	 return (1);
 }
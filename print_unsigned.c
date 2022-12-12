/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:06:00 by nsoares-          #+#    #+#             */
/*   Updated: 2022/12/12 18:30:19 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int n)
{
	char	*str;
	int		len;

	str = ft_utoa(n);
	len = print_str(str);
	free (str);
	return (len);
}

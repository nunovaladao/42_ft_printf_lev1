/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:11:35 by nsoares-          #+#    #+#             */
/*   Updated: 2022/12/11 20:42:09 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	tamanho(unsigned int n)
{
	int	l;

	l = 0;
	while (n != 0)
	{
		++l;
		n = n / 10;
	}
	return (l);
}

char	*ft_utoa(unsigned int n)
{
    char *str;
    int size;

    size = tamanho(n);
    str = malloc(sizeof(char) * (size + 1));
    if (!str)
        return (NULL);
    str[size] = '\0';
    while (n != 0)
    {
        str[size -1] = n % 10 + 48;
        n = n / 10;
        size--;
    }
    return (str);
}
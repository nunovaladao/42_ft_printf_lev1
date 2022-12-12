/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:57:56 by nsoares-          #+#    #+#             */
/*   Updated: 2022/12/12 12:36:40 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int ft_printf(const char *str, ...)
{
    va_list arg;
    int i;
    int print_len;

    if (!str)
        return (0);
    i = 0;
    print_len = 0;
    va_start(arg, str);
    while(str[i])
    {
        
    }
    va_end(arg);
    return (print_len);
}

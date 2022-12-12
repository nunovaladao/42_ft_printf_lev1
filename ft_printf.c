/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:57:56 by nsoares-          #+#    #+#             */
/*   Updated: 2022/12/12 20:12:14 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format, va_list arg)
{
	int	len;

	len = 0;
	if (format == '%')
		len += write(1, "%", 1);
	else if (format == 'd' || format == 'i')
		len += print_int(va_arg(arg, int));
	else if (format == 'u')
		len += print_unsigned(va_arg(arg, unsigned int));
	else if (format == 's')
		len += print_str(va_arg(arg, char *));
	else if (format == 'c')
		len += print_char(va_arg(arg, int));
	else if (format == 'x' || format == 'X')
	{
		if (format == 'X')
			return (print_hex(va_arg(arg, unsigned int), "0123456789ABCDEF"));
		else
			return (print_hex(va_arg(arg, unsigned int), "0123456789abcdef"));
	}
	else if (format == 'p')
		len += print_ptr(va_arg(arg, void *), "0123456789abcdef");
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		print_len;

	if (!str)
		return (0);
	i = 0;
	print_len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
			print_len += write(1, &str[i], 1);
		i++;
		if (str[i] == '%')
		{
			print_len += ft_check_format(str[i + 1], arg);
			i++;
		}
	}
	va_end(arg);
	return (print_len);
}

/* int main()
{
	ft_printf("Nuno");
} */
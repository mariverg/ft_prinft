/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariverg <mariverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:11:17 by mariverg          #+#    #+#             */
/*   Updated: 2024/01/29 14:22:50 by mariverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprinft.h"

int	typevalues(char format, va_list arg)
{
	if (format == 'c')
		ft_putchar(va_arg(arg, int));
	else if (format == 's')
		ft_putstr(va_arg(arg, char *));
	else if (format == '%')
		ft_putchar('%');
	return (0);

}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;

	len = 0;
	va_start(arg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			len += typevalues(*format, arg);
			format++;
		}
		else
		{
			len += ft_putchar(*format);
			format++;
		}
	}
	return (len);
}

int main()
{	
	//int i = 'c';
	ft_printf("%c", 'c');
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:08:34 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:24:48 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_puthex(int n, char c)
{
	int				count;
	unsigned int	nb;

	count = 0;
	nb = n;
	if (nb < BASE16)
	{
		if (c == 'x')
		{
			count += ft_putchar(LOWER_CASE[nb]);
		}
		else if (c == 'X')
			count += ft_putchar(UPPER_CASE[nb]);
	}
	else
	{
		count += ft_puthex(nb / BASE16, c);
		count += ft_puthex(nb % BASE16, c);
	}
	return (count);
}

int	ft_putnbr(long n, int base)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count += ft_putchar('-');
	}
	if (n < base)
	{
		count += ft_putchar(n + '0');
	}
	else
	{
		count += ft_putnbr(n / base, base) + ft_putnbr(n % base, base);
	}
	return (count);
}

int	ft_printformat(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr((long)(va_arg(ap, int)), BASE10));
	else if (specifier == 'u')
		return (ft_putunsnbr(va_arg(ap, unsigned int)));
	else if (specifier == 'p')
		return (ft_putpoint(va_arg(ap, void *)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_puthex((va_arg(ap, int)), specifier));
	else
		return (ft_putchar(specifier));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	if (!format)
	{
		return (count = -1);
	}
	va_start(ap, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			count += ft_printformat(format[++i], ap);
		else
			count += ft_putchar(format[i]);
		++i;
	}
	va_end(ap);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:15:00 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/04/23 15:24:57 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexpoint(long n)
{
	int				count;
	unsigned long	nb;

	count = 0;
	nb = n;
	if (nb < BASE16)
	{
		count += ft_putchar(LOWER_CASE[nb]);
	}
	else
	{
		count += ft_puthexpoint(nb / BASE16);
		count += ft_puthexpoint(nb % BASE16);
	}
	return (count);
}

int	ft_putpoint(void *address)
{
	int	count;

	count = 0;
	if (!address)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	else
	{
		write(1, "0x", 2);
		count += ft_puthexpoint((long)address);
	}
	return (count + 2);
}

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
		return (ft_putstr("(null)"));
	count = 0;
	while (*str)
	{
		count += ft_putchar((int)*str);
		++str;
	}
	return (count);
}

int	ft_putunsnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
	{
		count += ft_putchar(n + '0');
	}
	else
	{
		count += ft_putnbr((n / 10), BASE10) + ft_putnbr((n % 10), BASE10);
	}
	return (count);
}

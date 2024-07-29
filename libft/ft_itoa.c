/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:12:04 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/13 14:21:07 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// converter um valor inteiro (int) em sua
//representação de string (array de caracteres).
//Ou seja,ela converte um número inteiro em uma sequência de
//caracteres que representam esse número.

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	int long	n;
	char		*str;
	int			len;
	int			sign;

	n = nb;
	sign = 1;
	len = ft_numlen(n);
	if (n < 0)
	{
		len++;
		sign = -1;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	int	n;

	n = -2147483647;
	printf("%s\n", ft_itoa(n));
	return (0);
} */
/* #include <stdio.h>
#include <stdlib.h>

int main()
{
	char *i1 = ft_itoa((-2147483648));
 
 	if (atoi(i1) != (-2147483648))
 	{
		printf("ko: %s", i1);
		return 0;
 	}
	printf("ok: %s", i1);
} */

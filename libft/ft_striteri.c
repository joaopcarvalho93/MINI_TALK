/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:41:45 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/09 17:42:04 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// passa o endreco para a funcao. assim 
//nao temos de criar outra variavel.

/* void    custom_funtion(unsigned int index, char *character)
{
    if (*character >= 'a' && *character <= 'z')
    {
        *character = *character - 32;
    }
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include    <stdio.h>

int	main(void)
{
    char    input[] = "Hello, World!";
    
    printf("Original: %s\n", input);
    ft_striteri(input, custom_funtion);
    printf("Modified: %s\n", input);
} */
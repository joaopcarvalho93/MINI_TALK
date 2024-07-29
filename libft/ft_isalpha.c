/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:37:50 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/14 16:08:35 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

/* #include "stdio.h"

int	main(void)
{
    char    c;

    c = '2';
    if (ft_isalpha(c))
    {
        printf("%c is a alphabetic char.\n", c);
    }
    else{
        printf("%c is not a alphabetic char.\n", c);
    }
    return (0);
} */
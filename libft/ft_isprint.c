/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:32:07 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/31 16:30:47 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// to see if a charecter is a printable character

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/* #include "stdio.h"

int	main(void)
{
    char    c;

    c = 'A';
    if (ft_isprint(c))
    {
        printf("%c is a printable char.\n", c);
    }
    else{
        printf("%c is not a printable char.\n", c);
    }
    return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:16:10 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/31 16:33:45 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/* #include "stdio.h"

int	main(void)
{
    char    c;

    c = 'A';
    if (ft_isdigit(c))
    {
        printf("%c is a printable num.\n", c);
    }
    else{
        printf("%c is not a printable num.\n", c);
    }
    return (0);
} */
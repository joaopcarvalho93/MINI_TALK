/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:27:09 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/31 16:40:26 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* #include "stdio.h"

int	main(void)
{
    char    c;

    c = -100;
    if (ft_isascii(c))
    {
        printf("%c is ASCII.\n", c);
    }
    else{
        printf("%c is not ASCII.\n", c);
    }
    return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:56:28 by jpcarvalho        #+#    #+#             */
/*   Updated: 2023/11/13 17:26:19 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Cria uma nova string sem os caracteres
// no inicio ou fim da string

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, 0, len));
}

/* 
#include <stdio.h>

int	main(void)
{
    char *s1 = "llll Hello World lllll";
    char *set = "ll";
    char *s2;

    s2 = ft_strtrim(s1, set);
    printf("%s\n", s2);
    return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:48:58 by jpcarvalho        #+#    #+#             */
/*   Updated: 2023/10/31 16:16:22 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*According to the man this function locates the first occurence of c (converted
 * to an unsigned char) in string s. ft_memchr returns a pointer to the byte
 * located, or NULL if no such byte exists within n bytes.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
    char *str = "Hello World";
    char *ptr = ft_memchr(str, 'W', ft_strlen(str));
    
    if (ptr != NULL)
    {
        printf("Found at %d\n", (int)(ptr - str));
    }
    else
    {
        printf("Not found\n");    
    }
    return (0);
} */
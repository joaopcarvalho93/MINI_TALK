/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:26:42 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/09/02 15:26:45 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*According to the man this function compares byte string s1 against byte string
 * s2. Both strings are assumed to be n bytes long. The ft_memcmp function
 * returns zero if the two strings are identical, otherwise it returns the
 * difference between the first two differing bytes (treated as unsigned char
 * values, so that '\200' is greater than '\0', for example). Zero-length
 * strings are always identical.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main (void)
{
    char    s1[] = "ola sou andre";
    char    s2[] = "ola sou joao";
    
    printf("%d\n", ft_memcmp(s1, s2, 9));
    return (0);
} */
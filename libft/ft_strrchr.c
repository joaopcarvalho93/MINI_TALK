/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:29:09 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/23 17:59:34 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Is used to find the C on in ine string*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>

// int main(void)
// {
//     char *s = "Hello World";
//     int c = 'l';
//     char *s2;

//     s2 = ft_strrchr(s, c);
//     if (s2 != NULL)
//     {
//         printf("Found character %c at position: %ld ", c, s2 - s);
//     }
//     else
//     {
//         printf("Character %c not found in the string.\n", c);
//     }
//     return (0);
// }
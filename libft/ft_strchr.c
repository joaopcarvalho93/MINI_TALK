/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:38:24 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/13 16:25:03 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function returns a pointer to the first
// occurrence of the character c in the string s.

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	c = (char)c;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char *s = "Hello World !";
//     printf("%s",ft_strchr(s, 'W'));
//     printf("%s",strchr(s, 'W'));
// }
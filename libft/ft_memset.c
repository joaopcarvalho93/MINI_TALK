/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:45:04 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/24 20:27:52 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memset() function writes len bytes
//  of value c (converted to an unsigned char) to the string b.

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	i = 0;
	mem = (unsigned char *)s;
	while (i < n)
	{
		mem[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int main (void)
// {
//     char s[] = "Hello World !";
//     ft_memset(s, 'a', 5);
//     printf("%s\n", s);
//     return (0);
// }
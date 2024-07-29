/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:13:52 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/09 18:09:37 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memmove() function copies n bytes
//  from memory area src to memory area dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;
	unsigned char		*actual;

	if (dest == NULL && src == NULL)
		return (NULL);
	char_dest = (unsigned char *)dest;
	char_src = (unsigned char *)src;
	actual = char_dest;
	if (char_dest > char_src)
	{
		char_dest += n;
		char_src += n;
		while (n--)
		{
			*(--char_dest) = *(--char_src);
		}
	}
	else
	{
		while (n--)
			*(char_dest++) = *(char_src++);
	}
	return (actual);
}
/* #include <stdio.h>
int main (void)
{
	char s[] = "Hello World !";
	ft_memmove(s, s + 6, 5);
	printf("%s\n", s);
	return (0);
} */
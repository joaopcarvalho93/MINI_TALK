/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:23:04 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/14 16:28:05 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcpy() function copies up to size - 1 characters from the
//  NUL-terminated string src to dst, NUL-terminating the result.
// It returns the total length of the string it tried to copy.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/* #include <stdio.h>

int main(void)
{
	char src[] = "Hello World !";
	char dst[5];
	printf("%zu",ft_strlcpy(dst, src, 5));
} */
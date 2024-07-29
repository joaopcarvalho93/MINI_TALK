/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:28:39 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/24 17:29:06 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlcat() function appends the NUL-terminated
// string src to the end of dst.

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	if (len_d < size - 1 && size > 0)
	{
		while (src[i] && len_d + i < size - 1)
		{
			dst[len_d + i] = src[i];
			i++;
		}
		dst[len_d + i] = '\0';
	}
	if (len_d >= size)
		return (len_s + size);
	else
		return (len_s + len_d);
}
// Mesmo que dst não tenha espaço suficiente,
// o valor retornado por strlcat()
// é o tamanho total da string que tentou criar.

// #include <stdio.h>

// int main(void) {
//     char src[] = "world!";
//     char dst[9] = "Hello ";
//     size_t result = ft_strlcat(dst, src, sizeof(dst));

//     printf("Concatenated String: %s\n", dst);
//     printf("Resulting Length: %zu\n", result);

//     return (0);
// }
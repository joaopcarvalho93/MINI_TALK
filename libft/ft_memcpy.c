/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:44:23 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/25 17:09:32 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copia de src para dst ate N.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*char_dest;
	unsigned char	*char_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	char_dest = (unsigned char *)dest;
	char_src = (unsigned char *)src;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
    int str[] = {0, 3, 5, 9};
    int a[4];

    ft_memcpy(a, str, sizeof(int) * 4);
    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[4]);
    printf("%d\n", a[3]);
    return (0);
} */
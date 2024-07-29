/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:57:34 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/24 17:49:14 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The  strdup() function returns a pointer to a new string which is a du‐
plicate of the string s.  Memory for the new string  is  obtained  with
malloc(3), and can be freed with free(3).*/

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i])
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
//     char *a = ("ola");
//     char *b = ft_strdup(a);

//     printf("ft_strdup: %s\n", a);
//     printf("strdup: %s\n", b);
//     free(b);
//     return (0);
// }
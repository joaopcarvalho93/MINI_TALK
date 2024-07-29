/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:54:41 by jpcarvalho        #+#    #+#             */
/*   Updated: 2023/11/13 14:51:17 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strnstr() function locates the first occurrence of the null-terminated.
// j vai contando sempre que i+j for igual a needle de j.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char *haystack = "This is a simple example for testing.";
// 	const char *needle = "example";
// 	size_t len = 30;

// 	char *result = strnstr(haystack, needle, len);

// 	if (result != NULL)
// 	{
// 		printf("'%s' found at position %ld: %s\n", needle, result - haystack,
// 				result);
// 	}
// 	else
// 	{
// 		printf("'%s' not found in the haystack.\n", needle);
// 	}

// 	return (0);
// }
// 	if (result != NULL)
// 	{
// 		printf("'%s' found at position %ld: %s\n", needle, result - haystack,
// 				result);
// 	}
// 	else
// 	{
// 		printf("'%s' not found in the haystack.\n", needle);
// 	}

// 	return (0);
// }
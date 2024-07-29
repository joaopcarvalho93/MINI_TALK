/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:33:01 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/24 13:20:47 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare two strings, specifically to determine
 if the frist n characters of two strings are equal*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     const char *str1 = "apple";
//     const char *str2 = "appetizer";

//     int result = strncmp(str1, str2, 4);

//     if (result < 0) {
//         printf("str1 is less than str2\n");
//     } else if (result > 0) {
//         printf("str1 is greater than str2\n");
//     } else {
//         printf("str1 is equal to str2\n");
//     }

//     return (0);
// }

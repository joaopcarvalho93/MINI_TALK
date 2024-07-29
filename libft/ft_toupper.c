/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:23:08 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/23 17:23:47 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The toupper function in C is used to convert 
// a lowercase character to its corresponding 
// uppercase character.

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

// #include <stdio.h>

// int ft_toupper(int c);

// int main() {
//     char lowercase[] = "hello world";
//     char uppercase[sizeof(lowercase)]; // Create an uppercase buffer

//     for (int i = 0; lowercase[i] != '\0'; i++) {
//         uppercase[i] = ft_toupper(lowercase[i]);
//     }

//     printf("Original: %s\n", lowercase);
//     printf("Uppercase: %s\n", uppercase);

//     return (0);
// }

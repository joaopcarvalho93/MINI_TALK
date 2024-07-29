/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:33:45 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/02 11:53:45 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The tolower function in C is used to convert 
// a lowercase character to 
// its corresponding lowercase character.

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

// #include <stdio.h>

// int ft_toupper(int c);

// int main() {
//     char uppercase[] = "HELLO WOrLD";
//     char lowercase[sizeof(uppercase)];

//     for (int i = 0; uppercase[i] != '\0'; i++) {
//         lowercase[i] = ft_tolower(uppercase[i]);
//     }

//     printf("Original: %s\n", uppercase);
//     printf("Uppercase: %s\n", lowercase);

//     return (0);
// }
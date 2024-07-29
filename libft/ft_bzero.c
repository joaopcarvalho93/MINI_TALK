/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:37:02 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/14 16:19:30 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "Hola";
// 	ft_bzero(str, 3);
// 	printf("%s\n", str);
// 	return (0);
// }
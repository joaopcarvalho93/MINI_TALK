/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:18:47 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/20 20:20:10 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", ft_isalnum('a'));
//     printf("%d\n", ft_isalnum('1'));
//     printf("%d\n", ft_isalnum(' '));
//     printf("%d\n", ft_isalnum('\0'));
//     printf("%d\n", ft_isalnum(0));
//     printf("%d\n", ft_isalnum(67));
//     printf("%d\n", ft_isalnum(84));
//     printf("%d\n", ft_isalnum(129));
//     printf("%d\n", ft_isalnum(130));
//     printf("%d\n", ft_isalnum(131));
//     printf("%d\n", ft_isalnum(132));
//     printf("%d\n", ft_isalnum(133));
//     printf("%d\n", ft_isalnum(134));
//     printf("%d\n", ft_isalnum(135));
//     printf("%d\n", ft_isalnum(136));
//     printf("%d\n", ft_isalnum(137));
//     printf("%d\n", ft_isalnum(76));
//     printf("%d\n", ft_isalnum(139));
//     printf("%d\n", ft_isalnum(140));
//     printf("%d\n", ft_isalnum(141));
//     printf("%d\n", ft_isalnum(142));
//     printf("%d\n", ft_isalnum(143));
//     printf("%d\n", ft_isalnum(144));
//     printf("%d\n", ft_isalnum(145));
//     printf("%d\n", ft_isalnum(146));
//     printf("%d\n", ft_isalnum(147));
//     printf("%d\n", ft_isalnum(148));
//     printf("%d\n", ft_isalnum(149));
//     printf("%d\n", ft_isalnum(150));
//     printf("%d\n", ft_isalnum(151));
//     printf("%d\n", ft_isalnum(152));
//     printf("%d\n", ft_isalnum(153));
//     printf("%d\n", ft_isalnum(154));
//     printf("%d\n", ft_isalnum(155));
//     printf("%d\n", ft_isalnum(156));
//     printf("%d\n", ft_isalnum(157));
//     printf("%d\n", ft_isalnum(158));
//     printf("%d\n", ft_isalnum(159));
//     printf("%d\n", ft_isalnum(160));
//     printf("%d\n", ft_isalnum(161));
//     printf("%d\n", ft_isalnum(162));
//     printf("%d\n", ft_isalnum(163));
//     printf("%d\n", ft_isalnum(164));
//     printf("%d\n", ft_isalnum(165));
//     printf("%d\n", ft_isalnum(166));
// }

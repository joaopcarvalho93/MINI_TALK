/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:10:37 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/02 14:02:22 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include    "fcntl.h" */

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/* int     main(void)
{
    char    s[] = "Hello, World!";
    int fd = open("test.txt", O_WRONLY);
    ft_putstr_fd(s, fd);
    close(fd);
} */
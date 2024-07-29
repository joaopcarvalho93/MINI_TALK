/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:44:56 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/13 17:45:23 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <fcntl.h>

// Escreve n no documento dado.
//  fd<0 verifica se o file descriptor est'a corrento.

void	ft_putnbr_fd(int n, int fd)
{
	int long	ln;

	if (fd < 0)
		return ;
	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln *= -1;
	}
	if (ln > 9)
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putnbr_fd(ln % 10, fd);
	}
	else
	{
		ft_putchar_fd(ln + '0', fd);
	}
}

/* int main(void)
{
    int n = 78256;
    int fd = open("test.txt", O_WRONLY);
    ft_putnbr_fd(n, fd);
    close(fd);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:02:21 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/09/02 16:41:34 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

// 128 contratio de 1 10000000
// SIGUSR1 = 0
// SIGUSR2 = 1

void	ft_send_string(int pid, char *str)
{
	int	i;
	int	character;

	i = 0;
	while (*str)
	{
		character = *str;
		while (i < 8)
		{
			if (character << i & 128)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			i++;
			usleep(150);
		}
		str++;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3)
	{
		ft_printf("Usage: ./client [PID] [message]\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		pid = ft_atoi(argv[1]);
		if (pid < 1)
		{
			perror("error pid");
			exit(EXIT_FAILURE);
		}
		ft_send_string(pid, argv[2]);
	}
	return (0);
}

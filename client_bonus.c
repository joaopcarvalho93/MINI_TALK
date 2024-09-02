/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:25:32 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/09/02 19:17:09 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

// 128 contratio de 1 10000000
// SIGUSR1 = 0
// SIGUSR2 = 1

void	sig_handler(int sig)
{
	static int	i;

	i = 0;
	if (sig == SIGUSR1 && i == 0)
	{
		ft_printf("Message received by server\n");
		i = 1;
	}
}

void	ft_send_string(char *str, int pid)
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

int	main(int argc, char *argv[])
{
	struct sigaction	sa;
	int					i;

	i = 0;
	if (argc != 3 || !argv[2])
		return (ft_printf("Usage: ./client [PID] [message]\n"));
	while (argv[1][i])
	{
		if (!ft_isdigit(argv[1][i++]))
		{
			ft_printf("Invalid PID\n");
			return (1);
		}
	}
	sa.sa_handler = &sig_handler;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_send_string(argv[2], ft_atoi(argv[1]));
	return (EXIT_SUCCESS);
}

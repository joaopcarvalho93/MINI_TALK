/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpcarvalho <jpcarvalho@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:20:41 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/07/09 18:56:23 by jpcarvalho       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minitalk.h"

// - The server’s job is to listen for signals
//from the client and decode them into a message.
// - Print its PID when starts
// - Signal handelrs for SIGUSR1 and SIGUSR2
// - Decode the signals to reconstruct the message
// - Infinite loop where it repeatedly calls pause(),
// causing it to wait indefinitely for signals. When a signal is received,
// the signal handler function (ft_handle_signal) will be called to handle it.

void	ft_signal_handler(int sig, siginfo_t *info, void *context)
{
	static unsigned char	character = 0;
	static int				i = 0;

	(void)context;
	if (sig == SIGUSR1)
		character = (character << 1);
	else if (sig == SIGUSR2)
		character = (character << 1) | 1;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(character, 1);
		if (!character)
			ft_putchar_fd('\n', 1);
		character = 0;
		i = 0;
		if (kill(info->si_pid, SIGUSR2) == -1)
			ft_printf("Failed to send SIGUSR2 from './server'\n");
		return ;
	}
	if (kill(info->si_pid, SIGUSR1) == -1)
		ft_printf("Failed to send SIGUSR1 from './server'\n");
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	while (1)
	{
		sa.sa_flags = SA_SIGINFO;
		sa.sa_sigaction = &ft_signal_handler;
		if (sigaction(SIGUSR1, &sa, NULL) == -1)
		{
			ft_printf("Failed to send SIGUSR1 from './client'\n");
			exit(EXIT_FAILURE);
		}
		if (sigaction(SIGUSR2, &sa, NULL) == -1)
		{
			ft_printf("Failed to send SIGUSR2 from './client'\n");
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}

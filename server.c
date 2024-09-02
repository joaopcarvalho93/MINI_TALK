/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:05:56 by jhorta-c          #+#    #+#             */
/*   Updated: 2024/09/02 18:06:49 by jhorta-c         ###   ########.fr       */
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

void	ft_signal_handler(int sig)
{
	static unsigned char	character = 0;
	static int				i = 0;

	if (sig == SIGUSR1)
		character = character << 1;
	else if (sig == SIGUSR2)
		character = (character << 1) | 1;
	i++;
	if (i == 8)
	{
		if (character == '\0')
			ft_putchar_fd('\n', 1);
		else
			ft_putchar_fd(character, 1);
		i = 0;
		character = 0;
	}
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR1, ft_signal_handler);
		signal(SIGUSR2, ft_signal_handler);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:33:55 by jpcarvalho        #+#    #+#             */
/*   Updated: 2024/04/30 14:17:18 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Separa a string em substrings com base no delimitador

static int	ft_count_words(const char	*s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static int	ft_alloc_free(char **str, int f, int j)
{
	str[f] = (char *)malloc(j + 1);
	if (str[f] == NULL)
	{
		while (f >= 0)
		{
			free(str[f]);
			f--;
		}
		free (str);
		return (1);
	}
	return (0);
}

static void	ft_copy(const char *s, char *str, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
}

static void	*ft_repartir(const char *s, char c, char **str)
{
	int		i;
	int		j;
	int		count;
	int		error;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			error = ft_alloc_free(str, count, j);
			if (error)
				return (NULL);
			ft_copy(s + i, str[count++], c);
			i += j;
		}
	}
	str[count] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (str == NULL)
		return (NULL);
	if (!ft_repartir(s, c, str))
		return (NULL);
	return (str);
}

// int	main(void)
// {
// 	int		i = 0;
// 	char	string[] = "   ";
// 	char	**strings;

// 	strings = ft_split(string, ' ');
// 	while (strings[i])
// 	{
// 		printf("%s\n", strings[i]);
// 		i++;
// 	}
// 	return (0);
// }

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *s = "    ";
// 	char **str = ft_split(s, ' ');
// 	int i = 0;
// 	while (str[i])
// 	{
// 		printf("%s\n", str[i]);
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:47:41 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/13 18:01:00 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//  A funcao permite alterar ou modificar cada char
// do input s conforme a funcao f.
// Isto pode ser usado para diversas operacoes
// Exemplo para transformar em maiuscula

/* char    custom_function(unsigned int index, char character)
{
	size_t			len;
	char			*result;
	unsigned int	i;
	unsigned int	i;
	size_t			len;
	char			*result;

    if ( character >= 'a' && character <= 'z')
    {
        return (character - 32);
    }
    return (character);
} */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*result;
	unsigned int	i;

	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/* #include <stdio.h>

int	main(void)
{
    char    *input;
    char    *output;

    input = "Hello, World!";
    output = ft_strmapi(input, custom_function);
    if (output)
    {
        printf("Original: %s\n", input);
        printf("Modified: %s\n", output);
        free(output);    
    }
    else
    {
        printf("Memory allocation failed.\n");    
    }
    return (0);
} */
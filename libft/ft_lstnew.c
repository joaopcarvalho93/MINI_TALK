/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:33:37 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/08 11:54:07 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/* 
#include <stdio.h>

int	main(void)
{
	t_list	*node = ft_lstnew("Hello, World!");
	
	if (node)
	{
		printf("New node content: %s\n", (char *)node->content);
		free(node);
	}
	else
	{
		printf("Failed to create a new node,\n");	
	}
	return (0);
} */
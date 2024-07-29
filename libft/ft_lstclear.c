/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:46:56 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/15 11:24:15 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// to delete all the nodes. head points to NULL

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (!*lst)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
	lst = NULL;
}
/* void    ft_del(void *content)
{
    free(content);
}

#include    <stdio.h>

int	main(void)
{
    t_list	*head = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("Node 1"));
    t_list *node2 = ft_lstnew(ft_strdup("Node 2"));
    t_list *node3 = ft_lstnew(ft_strdup("Node 3"));

	ft_lstadd_front(&head, node3);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);
	
    printf("BEFORE\n");
    printf("%s\n", (char *)head->content);
    printf("%s\n", (char *)head->next->content);
    printf("%s\n", (char *)head->next->next->content);
	
    ft_lstclear(&head, ft_del);
	
    printf("AFTER\n");
    if (head == NULL)
        printf("NULL\n");
    return (0);
} */
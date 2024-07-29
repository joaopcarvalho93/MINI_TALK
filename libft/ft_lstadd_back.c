/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:51:02 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/07 17:35:09 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = ft_lstlast(*lst);
	current->next = new;
}

/* #include <stdio.h>

int	main(void)
{
    t_list *head = NULL;
    
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");
    t_list *node_last = ft_lstnew ("Node last");
    
    ft_lstadd_front(&head, node3);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);
    ft_lstadd_back(&head, node_last);

    t_list  *current = head;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }
    while (head)
    {
        t_list  *temp = head;
        head = head->next;
        free(temp);
    }
} */
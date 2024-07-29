/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:21:44 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/07 14:50:09 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/* 
#include <stdio.h>

int	main(void)
{
    t_list  *head = NULL;

    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    ft_lstadd_front(&head, node3);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);

    t_list *last = ft_lstlast(head);
    
    if (last)
        printf("The last node of the list is:%s\n", (char *)last->content);
    else
        printf("No node found");

    while (head)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
    return (0);
} */
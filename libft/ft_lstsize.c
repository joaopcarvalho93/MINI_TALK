/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:04:24 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/07 14:13:30 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c;

	if (!lst)
		return (0);
	c = 1;
	while (lst->next)
	{
		lst = lst->next;
		c++;
	}
	return (c);
}

/* #include <stdio.h>

int	main(void)
{
    
    t_list  *head = NULL;

    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    ft_lstadd_front(&head, node3);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node1);

    int size = ft_lstsize(head);

    printf("Number of elements in the linked list:%d\n", size);

    while (head)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
    return (0);
} */
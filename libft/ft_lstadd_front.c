/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:10:33 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/09 17:40:21 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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

    t_list *current = head;
    while (current)
    {
        printf("Node content: %s\n", (char *)current->content);
        current = current->next;
    }
    while (head)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
} */

/* This is used to add a new node to the front of a linked list.
t_list **lst: A pointer to a pointer to the head of the linked 
list. THis is a pointer to a pointer
because we want to update the head of the list if a new element 
is added to the front.
t_list *new: A pointer to the new node that you want to add to 
the front of the list
new->next This is done to ensure that the new node next pointer 
points to the current head of the list.
*lst = new: The pointer at *lst is updated to point to the new node.
This makes the new node the new haed of the list,
	effectively adding it to the front. */
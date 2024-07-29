/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:42:31 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/09 17:43:12 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

// #include <stdio.h>

// void    ft_del(void *content)
// {
//     printf("\nentrou\n");
//     free(content);
// }

// int main(void)
// {
//     t_list	*head = NULL;

// 	t_list *node1 = ft_lstnew(ft_strdup("Node 1"));
//     t_list *node2 = ft_lstnew(ft_strdup("Node 2"));
//     t_list *node3 = ft_lstnew(ft_strdup("Node 3"));

//     ft_lstadd_front(&head, node3);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node1);

//     printf("Linked List Before Deletion:\n");
//     t_list  *current = head;
//     while (current)
//     {
//         printf("This is the node before:%s\n", (char *)current->content);
//         current = current->next;
//     }

// 	ft_lstdelone(node1, free);

//     printf("-->%s",(char *)node1->content);

//     // if (head == node1)
//     //     head = node1->next;

//     // printf("\nLinked List After Deletion:\n");
//     // current = head;
//     // while (current)
//     // {
//     //         printf("This is the node before:%s\n",
		//(char *)current->content);
//     //         current = current->next;
//     // }
//     // if (head)
//     // {
//     //     t_list *temp;
//     //     while (head)
//     //     {
//     //         temp = head;
//     //         head = head->next;
//     //         free(temp);
//     //     }
//     // }
//     return (0);
// }
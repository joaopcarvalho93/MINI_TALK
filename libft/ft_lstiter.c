/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:23:40 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/08 16:51:35 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* #include <stdio.h>

void	print_content(void *content)
{
	printf("Content: %s\n", (char *)content);
}
int	main(void)
{
	t_list	*head = NULL;

	t_list *node1 = ft_lstnew(ft_strdup("node 1"));
	t_list *node2 = ft_lstnew(ft_strdup("node 2"));
	t_list *node3 = ft_lstnew(ft_strdup("node 3"));

	ft_lstadd_front(&head, node3);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node1);

	ft_lstiter(head, print_content);

	while (head)
	{
		t_list *temp = head;
		head = head->next;
		free(temp);
	}
	return (0);
	
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:55:43 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/11/09 17:46:58 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode;
	t_list	*newlist;
	void	*newcontent;

	if (!lst)
		return (0);
	newlist = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if ((!newnode))
		{
			del(newcontent);
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}

/* #include <stdio.h>
#include <stdlib.h>


void	delete_string(void *content)
{
	if (content)
	{
		free(content);
	}
}

void	*duplicate_string(void *content)
{
	char	*original;

	original = (char *)content;
	if (original)
		return (ft_strdup(original));
	return (NULL);
}
int	main(void)
{
	t_list	*head = NULL;

	ft_lstadd_back(&head, ft_lstnew("Hello"));
	ft_lstadd_back(&head, ft_lstnew(","));
	ft_lstadd_back(&head, ft_lstnew("World"));
	ft_lstadd_back(&head, ft_lstnew("!"));

	t_list	*newlist = ft_lstmap(head, duplicate_string, delete_string);

	printf("Original Linked List:\n");
	t_list	*current = head;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	printf("New Linked List:\n");
	current = newlist;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	ft_lstclear(&head, delete_string);
	ft_lstclear(&newlist, delete_string);
	
	return (0);
} */

// Funtion is designed to create a new linked list by applying a given funtion
// to each node's content in the original linked list
// It also has the ability to delete nodes if memory 
// allocation fails or an error occurs.
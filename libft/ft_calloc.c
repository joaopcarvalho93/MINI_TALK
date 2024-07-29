/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:45:14 by jpcarvalho        #+#    #+#             */
/*   Updated: 2023/11/13 18:45:32 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Mesmo que malloc mas faz reset passando tudo a 0.

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}

// int main(void)
// {
//     int *arr;
//     size_t num_elements = 5;

//     // Allocate memory and initialize to zero using myCalloc
//     arr = (int *)ft_calloc(num_elements, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     // Print the initialized array
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//     }

//     // Free the allocated memory
//     free(arr);

//     return (0);
// }
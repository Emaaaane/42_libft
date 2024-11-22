/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:49:59 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/17 06:57:40 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	char	*tmp;

	if (size != 0 && n > 18446744073709551615U / size)
		return (NULL);
	i = size * n;
	tmp = malloc(i);
	if (tmp == NULL)
	{
		return (NULL);
	}
	ft_bzero(tmp, i);
	return (tmp);
}
// int main() {
//     int *arr;
//     int *arr2;
//     size_t num_elements = 5;

//     // Use ft_calloc to allocate memory for an array of integers
//     arr = (int *)ft_calloc(num_elements, sizeof(int));
//     arr2 = (int *)calloc(num_elements, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     // Print the array elements to confirm they are initialized to zero
//     printf("Array elements after ft_calloc initialization:\n");
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     printf("Array elements after calloc initialization:\n");
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("%d ", arr2[i]);
//     }

//     // Free the allocated memory
//     free(arr);
//     return (0);
// }

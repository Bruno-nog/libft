/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:22:43 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/29 14:30:16 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 4294967296 / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int main(void) {
// int *arr = (int *)ft_calloc(5, sizeof(int)); // Aloca memória para 5 inteiros
//     if (arr == NULL) {
//         return 1; // Saída com erro se a alocação falhar
//     }
//     for (int i = 0; i < 5; i++) {
//         printf("%d\n", arr[i]); // Deve imprimir 0 para todos os elementos
//     }
//     return 0; // Saída bem-sucedida
// }
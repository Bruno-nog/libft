/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:13:28 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/24 16:46:23 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = ft_strlen(src);
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}
	if (dest_len >= size)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main(void)
// {
//     char dest[20] = "Hello, ";
//     const char src[] = "World!";
//     size_t result = ft_strlcat(dest, src, 20);
//     printf("After concatenation: '%s'\n", dest);
//     printf("Total length: %zu\n", result);
//     return (0);
// }
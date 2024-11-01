/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:09:44 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/29 16:48:01 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*dst;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	dst = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dst > s)
	{
		while (n > 0)
		{
			n--;
			dst[n] = s[n];
		}
	}
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	size_t n;
// 	unsigned const char str_s[11] = "pasteyellow";
// 	unsigned char str_d[] = "black";
// 	unsigned char *result; 
// 	n = 20;
// 	result = ft_memmove(str_d, str_s, n);
// 	printf("%s", result);
// 	return (0);
// }
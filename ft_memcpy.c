/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:08:18 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/29 16:47:55 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	dst = ((unsigned char *)dest);
	s = ((const unsigned char *)src);
	i = 0;
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char *result;
	char src[20] = "charles";
	char dest[20];
	
	result = ft_memcpy(dest, src, 10);
	printf("%s", result);
	return (0);
}*/
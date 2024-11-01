/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:22:33 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/21 17:07:16 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_chr;
	size_t			i;

	i = 0;
	s_chr = (unsigned char *)s;
	while (i < n)
	{
		if (s_chr[i] == (unsigned char)c)
		{
			return ((void *)&s_chr[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s", (char *)ft_memchr("something", 't', 8));
// 	return (0);
// }

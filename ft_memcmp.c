/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:20:10 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/21 18:03:01 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	i = 0;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
		{
			return (ptr_s1[i] - ptr_s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_memcmp("   ", "  ", 9));
// 	return (0);
// }
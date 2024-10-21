/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:13:15 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/17 16:24:35 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_i;

	big_i = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (big_i < len && big[big_i] != '\0')
	{
		little_i = 0;
		while (big[big_i + little_i] == little[little_i]
			&& (big_i + little_i) < len)
		{
			if (little[little_i + 1] == '\0')
				return ((char *)(big + big_i));
			little_i++;
		}
		big_i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char big[] = "Hello, World!";
	char little[] = "l";
    char *result = ft_strnstr(big, little, 20);
    printf("%s\n", result ? result : "Not found");
    return 0;
}*/
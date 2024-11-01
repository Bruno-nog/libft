/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:46:44 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/28 18:50:07 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		x;
	char	uc;

	i = 0;
	x = -1;
	uc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == uc)
		{
			x = i;
		}
		i++;
	}
	if (uc == '\0')
		return ((char *)s + i);
	if (x != -1)
	{
		return ((char *)s + x);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char c = 'n';
// 	char *result = ft_strrchr("brunobrnosalo", c);
// 	if (result != NULL)
// 	{
// 		printf("Última ocorrência: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Caractere '%c' não encontrado.\n", c);
// 	}
// 	return (0);
// }
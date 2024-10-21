/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:46:44 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/17 16:24:49 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	x;

	i = 0;
	x = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			x = i;
		}
		i++;
	}
	if (x != -1)
	{
		return ((char *)str + x);
	}
	return (NULL);
}
/*
int	main(void)
{
	char c = 'n';
	char *result = ft_strrchr("brunobrnosalo", c);
	if (result != NULL)
	{
		printf("Última ocorrência: %s\n", result);
	}
	else
	{
		printf("Caractere '%c' não encontrado.\n", c);
	}
	return (0);
}*/
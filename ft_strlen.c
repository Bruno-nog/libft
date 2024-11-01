/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:07:38 by brunogue          #+#    #+#             */
/*   Updated: 2024/11/01 13:17:25 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	counter;

	counter = 0;
	while (*s != '\0')
	{
		s++;
		counter++;
	}
	return (counter);
}
/*
int	main (void)
{
	printf("%zu", ft_strlen("brunoskvkkvsadsasc"));
	return (0);
}*/
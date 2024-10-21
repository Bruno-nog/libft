/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:13:26 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/18 16:16:46 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, const size_t len)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (len == 0)
	{
		return (src_len);
	}
	while (i < len - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main(void)
{
    char src[] = "Hello, World!";
    char dest[20];
    size_t len = 0;
    size_t result;

    // Chama a função ft_strlcpy
    result = ft_strlcpy(dest, src, len);

    // Imprime o resultado
    printf("Fonte: %s\n", src);
    printf("Destino: %s\n", dest);
    printf("Número de caracteres copiados: %zu\n", result);

    return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:26:31 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/23 19:30:45 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		c;
	char	*new_str;

	c = 0;
	i = 0;
	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	new_str = (char *)malloc(c + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i < c)
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// int	main(void)
// {
//     char *original = "Olá, mundo!";
//     char *copy;

//     copy = ft_strdup(original);
//     if (copy == NULL)
//     {
//         printf("Erro ao duplicar a string.\n");
//         return (1);
//     }

//     printf("Original: %s\n", original);
//     printf("copy: %s\n", copy);

//     // Lembre-se de liberar a memória alocada
//     free(copy);

//     return (0);
// }
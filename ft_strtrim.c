/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:24:55 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/25 16:21:00 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	char	*cut_str;
	int		end;

	start = 0;
	if (s1 == NULL || set == NULL)
	{
		return (NULL);
	}
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	cut_str = (char *)malloc(end - start + 1);
	if (cut_str == NULL)
		return (NULL);
	ft_strlcpy(cut_str, s1 + start, end - start + 1);
	return (cut_str);
}
/*
int main(void)
{
    char *result;

    result = ft_strtrim("Hello World!", "Hld!e");
    printf("cut string: '%s'\n", result);
    free(result); // Libere a memória após o uso

    result = ft_strtrim("!!!Hello!!!", "!");
    printf("cut string: '%s'\n", result);
    free(result);

    result = ft_strtrim("", " ");
    printf("cut string: '%s'\n", result);
    free(result);

    result = ft_strtrim(NULL, " ");
    printf("cut string: '%s'\n", result); // Deve retornar NULL

    return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:59:20 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/28 18:27:58 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	counter;

// 	counter = 0;
// 	while (*s != '\0')
// 	{
// 		s++;
// 		counter++;
// 	}
// 	return (counter);
// }
// size_t	ft_strlcpy(char *dest, const char *src, const size_t len)
// {
// 	size_t	i;
// 	size_t	src_len;

// 	src_len = 0;
// 	i = 0;
// 	while (src[src_len] != '\0')
// 	{
// 		src_len++;
// 	}
// 	if (len == 0)
// 	{
// 		return (src_len);
// 	}
// 	while (i < len - 1 && src[i] != '\0')
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (src_len);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_str;
	size_t	s_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub_str = (char *)malloc(1);
		if (sub_str == NULL)
			return (NULL);
		sub_str[0] = '\0';
		return (sub_str);
	}
	if (len > s_len - start)
		len = s_len - start;
	sub_str = (char *)malloc(len + 1);
	if (sub_str == NULL)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}

/*
int main(void)
{
    char *str = "Hello, World!";
    char *substring;

    substring = ft_substr(str, 7, 10);
    printf("%s\n", substring); 
    free(substring);
    return 0;
}*/
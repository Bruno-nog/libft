/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:01:01 by brunogue          #+#    #+#             */
/*   Updated: 2024/10/28 18:22:22 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word_boolean;

	count = 0;
	in_word_boolean = 0;
	while (*s)
	{
		if (*s != c && in_word_boolean == 0)
		{
			in_word_boolean = 1;
			count++;
		}
		else if (*s == c)
			in_word_boolean = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	int		j;
	int		len;

	j = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = i;
		while (s[i] && s[i] != c)
			i++;
		len = i - len;
		if (len > 0)
			result[j++] = ft_substr(s, i - len, len);
	}
	result[j] = NULL;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:01:01 by brunogue          #+#    #+#             */
/*   Updated: 2024/11/07 11:55:20 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_result(char **result)
{
	int	i;

	i = 0;
	if (result == NULL)
		return ;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	*get_next_word(char const *s, int *i, char c)
{
	int	start;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	if (start < *i)
		return (ft_substr(s, start, *i - start));
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = get_next_word(s, &i, c);
			if (result[j] == NULL)
				return (free_result(result), NULL);
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

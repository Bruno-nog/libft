/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:27:36 by brunogue          #+#    #+#             */
/*   Updated: 2024/11/01 13:16:43 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void my_function(unsigned int i, char c)
// {
// 	if (c >= 65 && c <= 90)
// 		c += 32;
// 	else if (c >= 97 && c <= 122)
// 		c -= 32;
// }

// int	main(void)
// {
// 	char *str = "uma string";
// 	printf("%s", ft_striteri(str, my_function));
// 	return (0);
//}
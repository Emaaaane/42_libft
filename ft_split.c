/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imel-haj <imel-haj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:37:48 by imel-haj          #+#    #+#             */
/*   Updated: 2024/11/22 19:19:04 by imel-haj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] == c)
	{
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	*free_mem(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

static void	get_word(char const *s, int *i, char c, int *start)
{
	while (s[*i] && s[*i] == c)
		(*i)++;
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		start;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	start = 0;
	j = 0;
	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (j < count_words(s, c))
	{
		get_word(s, &i, c, &start);
		if (i > start)
		{
			str[j] = ft_substr(s, start, i - start);
			if (!str[j])
				return (free_mem(str, j - 1));
		}
		j++;
	}
	return (str[j] = NULL, str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:09:58 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 17:45:04 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*word_dup(char const *start, char c)
{
	int		len;
	char	*word;
	int		i;

	i = 0;
	len = 0;
	while (start[len] && start[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_all(char **res, int i)
{
	while (--i >= 0)
		free(res[i]);
	free(res);
}

static int	do_split(char const *str, char c, char **res)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			res[i] = word_dup(str, c);
			if (!res[i++])
			{
				free_all(res, i);
				return (1);
			}
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	res[i] = NULL;
	return (0);
}

char	**ft_split(char const *str, char c)
{
	int		words;
	char	**res;

	if (!str)
		return (NULL);
	words = count_words(str, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (do_split(str, c, res))
		return (NULL);
	return (res);
}

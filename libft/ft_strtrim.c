/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:39:18 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 17:45:15 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static void	ft_strcopy(char const *s1, char *res, int start, int end)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		res[i] = s1[start];
		i++;
		start++;
	}
	res[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	if (start > end)
	{
		res = malloc(1);
		if (res)
			res[0] = '\0';
		return (res);
	}
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	ft_strcopy(s1, res, start, end);
	return (res);
}

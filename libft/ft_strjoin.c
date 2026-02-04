/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:10:33 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 17:45:08 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	int	dest_len;
	int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = malloc(size);
	if (!res)
		return (NULL);
	res[0] = '\0';
	ft_strcat(res, s1);
	ft_strcat(res, s2);
	return (res);
}

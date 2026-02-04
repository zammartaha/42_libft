/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:20:43 by tzammar           #+#    #+#             */
/*   Updated: 2025/02/19 18:20:43 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(i + 1);
	if (dest == NULL)
		return (NULL);
	dest[i] = '\0';
	while (i > 0)
	{
		i--;
		dest[i] = src[i];
	}
	return (dest);
}

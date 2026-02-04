/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 10:33:54 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 17:45:09 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	destsize;
	size_t	i;

	srcsize = 0;
	destsize = 0;
	i = 0;
	while (src[srcsize] != '\0')
		srcsize++;
	while (destsize < size && dest[destsize] != '\0')
		destsize++;
	if (size <= destsize)
		return (size + srcsize);
	while (src[i] != '\0' && destsize + i < size - 1)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (destsize + srcsize);
}

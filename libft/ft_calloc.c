/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:53:52 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 17:44:39 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*dest;
	unsigned char	*p;
	size_t			total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > 2147483647 / size)
		return (NULL);
	total = nmemb * size;
	dest = malloc(total);
	if (dest == NULL)
		return (NULL);
	p = (unsigned char *)dest;
	while (total--)
		p[total] = 0;
	return (dest);
}

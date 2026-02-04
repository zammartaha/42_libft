/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:52:21 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 17:45:02 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_int_to_str(int nb, int fd)
{
	int	buffer[12];
	int	i;

	i = 0;
	while (nb > 0)
	{
		buffer[i] = (nb % 10 + '0');
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(fd, &buffer[i], 1);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	ft_int_to_str(nb, fd);
}

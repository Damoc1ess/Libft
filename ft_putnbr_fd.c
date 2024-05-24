/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:16:19 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/24 17:04:30 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	nb;

	nb = n;
	if (n < 0)
	{
		write (fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}
/*
int	main(void)
{
	int	nbr;
	int	fd;

	nbr = 2147483647;
	fd = open("test", O_CREAT | O_WRONLY, 1000);
	ft_putnbr_fd(nbr, fd);
	close(fd);
}
*/
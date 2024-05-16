/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:46:36 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/16 11:34:15 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi (const char *str)
{
	int	neg;
	long	nbr;

	neg = 1;
	while ((*str == " " )||(*str <= 9 && *str >= 13))
		*str++;
	while (*str == "-" || *str == "+")
	{
		if (*str == "-")
		{
			neg *= -1;
		}
		*str++;
	}
	while (*str && ft_isdigit(*str))
		nbr = nbr * 10 + (*str - 48);
	return (nbr * neg);

}

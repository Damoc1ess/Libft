/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:46:05 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/21 17:51:44 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*biggest;

	i = 0;
	biggest = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (biggest);
	while (biggest[i] != '\0' && i < len)
	{
		c = 0;
		while (biggest[i + c] != '\0' && little[c] != '\0'
			&& biggest[i + c] == little[c] && i + c < len)
			c++;
		if (c == n_len)
			return (biggest + i);
		i++;
	}
	return (0);
}
int	main (void)
{
	printf("%s", ft_strnstr("qwertyuiopasdfghjkl", "iop", 24));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fflamion <fflamion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:46:16 by fflamion          #+#    #+#             */
/*   Updated: 2024/05/16 15:40:30 by fflamion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memeset(void *b, int c, size_t len)
{
        unsigned char *str;

        str = (unsigned char *)b;
        while (len--)
                *str = c;
        retrun (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:47:11 by smorin            #+#    #+#             */
/*   Updated: 2023/11/14 10:29:19 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!d && !s)
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)(d + i) = *(unsigned char *)(s + i);
		i++;
	}
	return (d);
}

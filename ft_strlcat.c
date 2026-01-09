/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:40:34 by smorin            #+#    #+#             */
/*   Updated: 2023/11/15 12:01:49 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lensrc;
	unsigned int	lendest;

	i = 0;
	if (!dest && size == 0)
		return (0);
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	j = lendest;
	if (size == 0 || size <= lendest)
		return (lensrc + size);
	while (src[i] && (i < size - lendest - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lendest + lensrc);
}

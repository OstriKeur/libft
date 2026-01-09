/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:30:05 by smorin            #+#    #+#             */
/*   Updated: 2023/11/14 10:50:40 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	srcsize;
	unsigned int	i;

	srcsize = ft_strlen((char *)src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

	/*  int	main(void)
	{
		char	a[5]= "abcd";
		char	b[]= "";
		unsigned int	n = 5;

		printf("%d\n", ft_strlcpy(b, a, n));
		printf("%s", b);
	} */
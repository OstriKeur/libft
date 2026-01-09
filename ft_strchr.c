/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:10:10 by smorin            #+#    #+#             */
/*   Updated: 2023/11/09 15:08:10 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == 0)
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}
/* int	main(void)
{
	char *s = "This is My string";
	char *st = ft_strchr(s, 'M');
	printf("first M: %s\n", st);
} */
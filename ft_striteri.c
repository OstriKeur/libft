/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:13:10 by smorin            #+#    #+#             */
/*   Updated: 2023/11/16 14:19:47 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	if (s && f)
	{
		index = 0;
		while (*s)
		{
			f(index, s);
			s++;
			index++;
		}
	}
}

/*
La fonction ft_striteri est utile lorsque vous souhaitez
 appliquer une opération spécifique à chaque caractère d'une chaîne,
en tenant compte de leur position dans la chaîne.
 Cela peut être utile pour effectuer des manipulations sur la chaîne,
par exemple,
la modification de certains caractères en fonction de leur position.
*/
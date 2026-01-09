/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:24:55 by smorin            #+#    #+#             */
/*   Updated: 2023/11/16 14:18:10 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char )c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*
Comparaison des octets : À chaque itération,
	elle compare l'octet à la position (unsigned char *)(s
	+ i) avec la valeur spécifiée c. La conversion en unsigned char est 
	utilisée pour éviter des comportements indéfinis liés au signe.

Renvoi du pointeur en cas de correspondance : Si une correspondance est trouvée,
	la fonction renvoie un pointeur vers l'octet correspondant.
Cette fonction est utile pour rechercher la présence d'une valeur 
particulière dans une zone de mémoire

*/
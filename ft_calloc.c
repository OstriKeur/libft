/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:54:13 by smorin            #+#    #+#             */
/*   Updated: 2023/11/16 14:15:07 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (size && (nmemb > __SIZE_MAX__ / size))
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}

/************
ft_calloc alloue de la mémoire pour un tableau de taille spécifiée,
	s'assure qu'il n'y a pas de dépassement de capacité,
	et initialise la mémoire allouée à zéro avant de 
	renvoyer le pointeur vers cette mémoire.

*************/
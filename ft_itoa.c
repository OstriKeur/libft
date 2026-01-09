/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:11:21 by smorin            #+#    #+#             */
/*   Updated: 2023/11/16 14:16:40 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	long	nb;

	nb = n;
	dest = malloc(sizeof(char) * (ft_nbrlen(nb) + 1));
	if (!dest)
		return (NULL);
	if (nb == 0)
		dest[0] = '0';
	i = ft_nbrlen(nb);
	dest[i] = '\0';
	if (nb < 0)
	{
		dest[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		dest[--i] = nb % 10 + '0';
		nb /= 10;
	}
	return (dest);
}

/*

ft_len : Cette fonction calcule la longueur d'un nombre en comptant 
le nombre de chiffres. 
Elle initialise la longueur à 1 si le nombre est 0 ou négatif,
	sinon à 0.
Cette fonction renvoie la valeur absolue d'un nombre.

malloc : Cette fonction alloue de la mémoire pour une chaîne
de caractères de taille spécifiée.

ft_itoa : Cette fonction principale convertit un entier en une
chaîne de caractères.
Elle détermine le signe du nombre,
	alloue de la mémoire pour la chaîne résultante,
	convertit le nombre en chaîne en inversant les chiffres,
	et ajoute le signe '-' si le nombre est négatif.


*/
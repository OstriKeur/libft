/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:09:47 by smorin            #+#    #+#             */
/*   Updated: 2023/11/16 14:18:24 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	long int	i;

	i = 0;
	if (!d && !s)
		return (NULL);
	if (d < s)
	{
		while ((size_t)i < n)
		{
			*(unsigned char *)(d + i) = *(unsigned char *)(s + i);
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			*(unsigned char *)(d + i) = *(unsigned char *)(s + i);
			i--;
		}
	}
	return (d);
}

/* int main()
{
	char *src = "zigouingouin";
	char dest[20];
	size_t i = 0;

	printf("%p\n", ft_memmove(dest, src, i));
	printf("%p\n", memmove(dest, src, i));
} */

/*
Vérification si les zones de mémoire source et destination sont les mêmes 
: La fonction commence par
 vérifier si les zones de mémoire source et destination sont identiques.
  Si c'est le cas,
cela signifie qu'il n'y a rien à copier,
et elle retourne directement le pointeur vers la destination.

Copie de droite à gauche si les zones se chevauchent
 et la source est avant la destination
 : Si les zones se chevauchent et la zone source est 
 située avant la zone destination dans la mémoire,
	la fonction copie de droite à gauche pour éviter 
	d'écraser des données avant leur copie.

Copie de gauche à droite si les zones se chevauchent 
et la destination est avant la source
: Si la zone destination est située avant la zone source,
la fonction effectue une copie normale de gauche à droite.

Retour du pointeur vers la zone de destination : Enfin,
	la fonction retourne un pointeur vers la zone de destination.
	
*/
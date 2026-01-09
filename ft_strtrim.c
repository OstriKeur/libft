/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:10:02 by smorin            #+#    #+#             */
/*   Updated: 2023/11/16 14:23:21 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*dest;

	if (!s1)
		return (0);
	i = 0;
	while (s1[i] != '\0' && ft_checkset(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_checkset(s1[j - 1], set) == 1)
		j--;
	dest = malloc(sizeof(char) * (j - i + 1));
	if (!dest)
		return (NULL);
	k = 0;
	while (i < j)
		dest[k++] = s1[i++];
	dest[k] = '\0';
	return (dest);
}

/*Cette fonction est utile lorsque vous souhaitez supprimer certains caractères
d'une chaîne, en fonction d'un ensemble de caractères spécifié.*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smorin <smorin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:50:12 by smorin            #+#    #+#             */
/*   Updated: 2023/11/14 10:20:33 by smorin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(buf1 + i) != *(unsigned char *)(buf2 + i))
			return (*(unsigned char *)(buf1 + i) - *(unsigned char *)(buf2
					+ i));
		i++;
	}
	return (0);
}

/* int main()
{
	int l1,len2,len3,result;
	char str1[] = "Learning Lad Rocks";
	char str2[] = "Learning Lad Rocks";

	len2 = strlen(str1);
	len3 = strlen(str2);

	l1 = len2 <= len3 ? len2 : len3;
	result = ft_memcmp(str1,str2,l1);
	if(result == 0)
	printf("First %d equal",l1);
	else
		printf("First %d not equal",l1);

} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paphetpr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:41:24 by paphetpr          #+#    #+#             */
/*   Updated: 2024/08/02 18:34:20 by paphetpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	ptr = (char *)malloc(sizeof(strs) * sizeof(char));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			ptr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size -1)
			ptr[k++] = sep[j++];
		i++;
	}
	return (ptr);
}
